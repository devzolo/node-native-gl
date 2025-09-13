# @devzolo/node-native-gl

Native OpenGL bindings for Node.js (with TypeScript typings), powered by GLEW.

[![npm](https://img.shields.io/npm/v/%40devzolo%2Fnode-native-gl)](https://www.npmjs.com/package/@devzolo/node-native-gl)
[![node](https://img.shields.io/node/v/%40devzolo%2Fnode-native-gl)](https://www.npmjs.com/package/@devzolo/node-native-gl)
[![license](https://img.shields.io/github/license/devzolo/node-native-gl)](./LICENSE)
[![os](https://img.shields.io/badge/OS-Windows%2010%2B%20%7C%20Linux%20%7C%20macOS-blue)](https://github.com/devzolo/node-native-gl)

This package exposes OpenGL constants and functions directly to Node.js via N-API, with full IntelliSense using `src/types/index.d.ts`. It is meant to be used where an OpenGL context (GLFW/SDL/WGL/EGL) is already created and current, and you need to call the GL API from Node.

Note: this package does not create windows or GL contexts. Ensure a valid, current OpenGL context before invoking most functions.

## Installation

Prerequisites:

- Node.js 16+ (LTS recommended)
- pnpm, npm, or yarn

If you use GitHub Packages, add to your `.npmrc`:

```env
@devzolo:registry=https://npm.pkg.github.com
//npm.pkg.github.com/:_authToken=${GITHUB_TOKEN}
```

Install:

```bash
# pnpm
pnpm add @devzolo/node-native-gl

# npm
npm install @devzolo/node-native-gl

# yarn
yarn add @devzolo/node-native-gl
```

The package attempts to download prebuilt binaries. If a binary is not available for your platform, it will build from source (requires a C++ toolchain).

## Quick start

TypeScript / ESM:

```ts
import GL from '@devzolo/node-native-gl';

// Initialize extensions (GLEW) and validate the current GL environment
const status = GL.init();
if (status !== GL.OK && status !== GL.NO_ERROR) {
  throw new Error('Failed to initialize OpenGL/GLEW');
}

// Example: query driver information
console.log('GL_VENDOR   =', GL.getString(GL.VENDOR));
console.log('GL_RENDERER =', GL.getString(GL.RENDERER));
console.log('GL_VERSION  =', GL.getString(GL.VERSION));
```

JavaScript (CommonJS):

```js
const GL = require('@devzolo/node-native-gl').default;

const status = GL.init();
if (status !== GL.OK && status !== GL.NO_ERROR) {
  throw new Error('Failed to initialize OpenGL/GLEW');
}

console.log('GL_VERSION =', GL.getString(GL.VERSION));
```

Important: drawing calls (`GL.begin`, `GL.drawArrays`, etc.) require a current OpenGL context. Use libraries like GLFW/SDL/win32/EGL to create and make a context current before calling the API.

## API

- Constants and functions mirror the OpenGL API, exposed under the `GL` namespace with TypeScript types.
- Type reference: see `src/types/index.d.ts` in this repository.
- Examples of available symbols:
  - Constants: `GL.TRIANGLES`, `GL.RGBA`, `GL.VERSION`, `GL.VENDOR`, `GL.ARRAY_BUFFER`.
  - Functions: `GL.init()`, `GL.getString()`, `GL.clearColor()`, `GL.clear()`, `GL.drawArrays()`, and hundreds more.

Typing: the default export is a `GL` object containing all typed members (TypeScript).

## Platforms and binaries

- **Supported platforms**: Windows (x64/x86), Linux (x64), macOS (x64/ARM64)
- **OpenGL implementation**: GLEW 2.1.0 (bundled)
- Prebuilt binaries are downloaded automatically when available.
- Fallback: local build with `node-pre-gyp`/`node-gyp` (requires a C++ toolchain). See next section.

### Platform-specific requirements

#### Windows
- **OpenGL libraries**: `opengl32.lib`, `glew32s.lib` (bundled)
- **Build tools**: Visual Studio Build Tools 2019/2022 with C++ (MSVC)
- **Python**: 3.x in PATH

#### Linux
- **OpenGL libraries**: `libGL.so`, `libGLEW.so` (system packages)
- **Installation** (Ubuntu/Debian):
  ```bash
  sudo apt update
  sudo apt install -y libgl1-mesa-dev libglew-dev
  ```
- **Installation** (CentOS/RHEL/Fedora):
  ```bash
  sudo yum install -y mesa-libGL-devel glew-devel
  # or for newer versions:
  sudo dnf install -y mesa-libGL-devel glew-devel
  ```
- **Build tools**: `gcc`, `g++`, `make`, `python3`

#### macOS
- **OpenGL libraries**: `OpenGL.framework`, `libGLEW.dylib` (system/bundled)
- **Build tools**: Xcode Command Line Tools
- **Installation**:
  ```bash
  xcode-select --install
  ```

## Build from source

### Prerequisites by platform

#### Windows
- Visual Studio Build Tools 2019/2022 with C++ (MSVC)
- Python 3.x in PATH
- Compatible `node-gyp` (pulled by the ecosystem as needed)

#### Linux
- GCC/G++ compiler
- Make
- Python 3.x
- OpenGL development libraries (see installation commands above)

#### macOS
- Xcode Command Line Tools
- Python 3.x

### Build steps

```bash
# Install dependencies
pnpm install
# or
npm install

# Build the native module
pnpm build
# or
npm run build
```

Other useful scripts:

```bash
pnpm test        # run tests
pnpm dist        # compile TypeScript to ./dist
pnpm package     # build addon + tests + package
```

## Troubleshooting

### Common issues

- **Missing context**: GL call failures usually indicate there is no current OpenGL context. Create/make one current before using the API.
- **Missing build tools**: if binary download fails, a local build requires platform-specific tools. Install the required tools and retry.
- **Unsupported Node**: for N-API errors, upgrade to Node 16+ or a recent LTS.

### Platform-specific issues

#### Windows
- **Missing build tools**: Install Visual Studio Build Tools 2019/2022 with C++ (MSVC)
- **Python 3.12: 'distutils' missing**: If you hit `ModuleNotFoundError: No module named 'distutils'` with Python 3.12, run:
  ```powershell
  py -3 -m ensurepip --upgrade
  py -3 -m pip install --upgrade pip
  py -3 -m pip install "setuptools<70" packaging wheel
  pnpm build
  ```

#### Linux
- **Missing OpenGL libraries**: Install the required OpenGL development packages:
  ```bash
  # Ubuntu/Debian
  sudo apt update
  sudo apt install -y libgl1-mesa-dev libglew-dev

  # CentOS/RHEL/Fedora
  sudo yum install -y mesa-libGL-devel glew-devel
  # or for newer versions:
  sudo dnf install -y mesa-libGL-devel glew-devel
  ```
- **Missing build tools**: Install GCC, Make, and Python:
  ```bash
  # Ubuntu/Debian
  sudo apt install -y build-essential python3-dev

  # CentOS/RHEL/Fedora
  sudo yum groupinstall -y "Development Tools"
  sudo yum install -y python3-devel
  ```

#### macOS
- **Missing Xcode tools**: Install Xcode Command Line Tools:
  ```bash
  xcode-select --install
  ```
- **Python issues**: Ensure Python 3.x is available and in PATH

## Technical details

### Cross-platform compatibility

This package is designed to work across Windows, Linux, and macOS with the following considerations:

#### Windows
- Uses `opengl32.lib` and bundled `glew32s.lib` (static linking)
- Requires Windows 10+ for optimal OpenGL support
- Supports both x64 and x86 architectures
- Uses Windows-specific headers conditionally (`windows.h`, `tchar.h`)

#### Linux
- Uses system OpenGL libraries (`libGL.so`, `libGLEW.so`)
- Compatible with Mesa drivers (software and hardware acceleration)
- Supports major distributions (Ubuntu, Debian, CentOS, RHEL, Fedora)
- Uses Linux-specific headers (`unistd.h`, `dlfcn.h`)

#### macOS
- Uses `OpenGL.framework` and system GLEW
- Compatible with both Intel and Apple Silicon (ARM64)
- Requires macOS 10.14+ for optimal OpenGL support
- Uses macOS-specific OpenGL headers (`OpenGL/glu.h`)

### Build system

The package uses `node-gyp` with platform-specific configurations:

- **Windows**: MSVC compiler with Windows SDK
- **Linux**: GCC/G++ with system OpenGL libraries
- **macOS**: Clang with Xcode Command Line Tools

### GLEW configuration

- **GLEW_NO_GLU**: Defined to avoid GLU dependencies on all platforms
- **GLEW_STATIC**: Used for static linking on Windows
- **Cross-platform**: GLEW 2.1.0 is bundled for consistent behavior

## Contributing

Contributions are welcome! Please open issues and pull requests. Keep the project style and ensure tests pass.

## License

MIT © devzolo. See `LICENSE`.

## Acknowledgements

- [GLEW 2.1.0](https://github.com/nigels-com/glew) for making OpenGL extension loading straightforward.
