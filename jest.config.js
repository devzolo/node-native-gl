module.exports = {
  preset: 'ts-jest/presets/js-with-ts',
  testEnvironment: 'node',
  verbose: true,
  moduleDirectories: ['node_modules', 'src'],
  modulePaths: ['<rootDir>/src', '<rootDir>/node_modules'],
  moduleFileExtensions: ['js', 'ts', 'json', 'node'],
  globals: {
    'ts-jest': {
      tsConfig: './tsconfig.json',
    },
    NODE_ENV: 'test',
  },
  collectCoverage: true,
  coverageReporters: ['json', 'lcov', 'text', 'clover'],
};
