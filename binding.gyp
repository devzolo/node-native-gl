{
  'variables': {
    'platform': '<(OS)',
    'build_arch': '<!(node -p "process.arch")',
    'build_win_platform': '<!(node -p "process.arch==\'ia32\'?\'Win32\':process.arch")',
  },
  'conditions': [
    # Replace gyp platform with node platform, blech
    ['platform == "mac"', {'variables': {'platform': 'darwin'}}],
    ['platform == "win"', {'variables': {'platform': 'win32'}}],
  ],
  'targets': [
    {
      'target_name': 'native-gl',
      "cflags!": [ "-fno-exceptions" ],
      "cflags_cc!": [ "-fno-exceptions" ],
      'sources': [
        'src/gl.cc'
      ],
      'defines' : ['GLEW_STATIC','NAPI_DISABLE_CPP_EXCEPTIONS','UNICODE'],
      'libraries': ['opengl32', 'glew32s'],
      "include_dirs": [
        "<!@(node -p \"require('node-addon-api').include\")",
        '<(module_root_dir)/deps/glew-2.1.0/include'
      ],
      "conditions": [
        ['OS=="win" and target_arch == "x64"', {
          'library_dirs' : ['<(module_root_dir)/deps/glew-2.1.0/lib/Release/x64']
        }]
      ]
    },
    {
      "target_name": "copy_modules",
      "type":"none",
      "dependencies" : [ "native-gl" ],
      "copies":[
        {
          'destination': '<(module_root_dir)\\bin\\<(platform)\\<(target_arch)',
          'files': [
            '<(module_root_dir)\\build\\Release\\native-gl.node',
          ]
        },
        {
          'destination': '<(module_root_dir)\\dist',
          'files': [
            '<(module_root_dir)\\src\\types\\index.d.ts',
          ]
        },
        {
          'destination': '<(module_root_dir)\\..\\node-native-opengl-examples\\node_modules\\@devzolo\\node-native-gl\\bin\\<(platform)\\<(target_arch)',
          'files': [
            '<(module_root_dir)\\build\\Release\\native-gl.node',
          ]
        },
        {
          'destination': '<(module_root_dir)\\..\\node-native-opengl-examples\\node_modules\\@devzolo\\node-native-gl\\dist',
          'files': [
            '<(module_root_dir)\\src\\types\\index.d.ts',
          ]
        }
      ]
    }
  ]
}
