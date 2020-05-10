#include <napi.h>

#define WIN32_LEAN_AND_MEAN             // Excluir itens raramente utilizados dos cabeçalhos do Windows
// Arquivos de Cabeçalho do Windows
#include <windows.h>
// Arquivos de Cabeçalho C RunTime
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>

// OpenGL Graphics Includes
#include <GL/glew.h>
#include <GL/gl.h>

#include <map>

#define JS_GL___________________________TODO(name) puts("TODO: GL."#name)
#define JS_GL_CONSTANT(name) exports.Set(Napi::String::New(env, #name), Napi::Number::New(env, GL_##name))
#define JS_GLEW_CONSTANT(name) exports.Set(Napi::String::New(env, #name), Napi::Number::New(env, GLEW_##name))
#define JS_GL_CONSTANT_(macro, name) exports.Set(Napi::String::New(env, name), Napi::Number::New(env, GL##macro))
#define JS_GL_SET_METHOD(name) exports.Set(Napi::String::New(env, #name), Napi::Function::New(env, name));
#define JS_ARGS(argc) \
if (info.Length() < argc) { \
  Napi::TypeError::New(env, "Wrong number of arguments").ThrowAsJavaScriptException(); \
  return env.Null(); \
}

#define JS_INT_ARG(pos, name) int32_t name = info[pos].As<Napi::Number>().Int32Value();
#define JS_LONG_ARG(pos, name) int64_t name = info[pos].As<Napi::Number>().Int64Value();
#define JS_UINT_ARG(pos, name) uint32_t name = info[pos].As<Napi::Number>().Uint32Value();
#define JS_STR_ARG(pos, name) std::string name = info[pos].As<Napi::String>().Utf8Value();
#define JS_DOUBLE_ARG(pos, name) double_t name = info[pos].As<Napi::Number>().DoubleValue();
#define JS_FLOAT_ARG(pos, name) float_t name = info[pos].As<Napi::Number>().FloatValue();
#define JS_PVOID_ARG(pos, name) void* name = (void*)info[pos].As<Napi::Number>().Int64Value();

#define JS_GLDOUBLE_ARG(pos, name) GLdouble name = info[pos].As<Napi::Number>().DoubleValue();
#define JS_GLFLOAT_ARG(pos, name) GLfloat name = info[pos].As<Napi::Number>().FloatValue();
#define JS_GLENUM_ARG(pos, name) GLenum name = info[pos].As<Napi::Number>().Uint32Value();
#define JS_GLUINT_ARG(pos, name) GLuint name = info[pos].As<Napi::Number>().Uint32Value();
#define JS_GLINT_ARG(pos, name) GLint name = info[pos].As<Napi::Number>().Int32Value();
#define JS_GLCLAMPF_ARG(pos, name) GLclampf name = info[pos].As<Napi::Number>().FloatValue();
#define JS_GLCLAMPD_ARG(pos, name) GLclampd name = info[pos].As<Napi::Number>().DoubleValue();
#define JS_GLSIZEI_ARG(pos, name) GLsizei name = info[pos].As<Napi::Number>().Int32Value();
#define JS_GLSIZEIPTR_ARG(pos, name) GLsizeiptr name = info[pos].As<Napi::Number>().Int64Value();

#define JS_ARG_TYPE(pos, type)  if (!info[pos].Is##type()) { \
  Napi::TypeError::New(env, "Wrong arguments").ThrowAsJavaScriptException(); \
  return env.Null(); \
}

namespace gl {

// function init(): GLenum;
Napi::Value init(const Napi::CallbackInfo& info) {
  return Napi::Number::New(info.Env(), glewInit());
}

// function accum(op: GLenum, value: GLfloat): void;
Napi::Value accum(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_ARGS(2);
	JS_ARG_TYPE(0, Number);
  JS_ARG_TYPE(1, Number);
	JS_GLENUM_ARG(0, op);
  JS_GLFLOAT_ARG(1, value);
  glAccum(op, value);
  return env.Undefined();
}

// function alphaFunc(func: GLenum, ref: GLclampf): void;
Napi::Value alphaFunc(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_ARGS(2);
	JS_ARG_TYPE(0, Number);
  JS_ARG_TYPE(1, Number);
	JS_GLENUM_ARG(0, func);
  JS_GLCLAMPF_ARG(1, ref);
  glAlphaFunc(func, ref);
  return env.Undefined();
}

// function areTexturesResident(n: GLsizei , textures: GLuint[], residences: GLboolean[]): GLboolean;
Napi::Value areTexturesResident(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(areTexturesResident);
  return env.Undefined();
}

// function arrayElement(i: GLint): void;
Napi::Value arrayElement(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(arrayElement);
  return env.Undefined();
}

// function begin(mode: GLenum): void;
Napi::Value begin(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
	JS_ARGS(1);
	JS_ARG_TYPE(0, Number);
	JS_GLENUM_ARG(0, mode);
	glBegin(mode);
  return env.Undefined();
}

// function bindTexture(target: GLenum, texture: GLuint): void;
Napi::Value bindTexture(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(bindTexture);
  return env.Undefined();
}

// function bitmap(width: GLsizei , height: GLsizei , xorig: GLfloat, yorig: GLfloat, xmove: GLfloat, ymove: GLfloat, bitmap: GLubyte[]): void;
Napi::Value bitmap(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(bitmap);
  return env.Undefined();
}

// function blendFunc(sfactor: GLenum, dfactor: GLenum): void;
Napi::Value blendFunc(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(blendFunc);
  return env.Undefined();
}

// function callList(list: GLuint): void;
Napi::Value callList(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
	JS_ARGS(1);
	JS_ARG_TYPE(0, Number);
	JS_GLUINT_ARG(0, list);
	glCallList(list);
  return env.Undefined();
}

// function callLists(n: GLsizei, type: GLenum, lists: GLvoid[]): void;
Napi::Value callLists(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(callLists);
  return env.Undefined();
}

// function clear(mask: GLbitfield): void;
Napi::Value clear(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_ARGS(1);
	JS_ARG_TYPE(0, Number);
	JS_GLENUM_ARG(0, mask);
  glClear(mask);
  return env.Undefined();
}

// function clearAccum(red: GLfloat, green: GLfloat, blue: GLfloat, alpha: GLfloat): void;
Napi::Value clearAccum(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(clearAccum);
  return env.Undefined();
}

// function clearColor(red: GLclampf, green: GLclampf, blue: GLclampf, alpha: GLclampf): void;
Napi::Value clearColor(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
	JS_ARGS(4);
	JS_ARG_TYPE(0, Number);
	JS_ARG_TYPE(1, Number);
	JS_ARG_TYPE(2, Number);
  JS_ARG_TYPE(3, Number);
	JS_GLCLAMPF_ARG(0, red);
	JS_GLCLAMPF_ARG(1, green);
	JS_GLCLAMPF_ARG(2, blue);
  JS_GLCLAMPF_ARG(3, alpha);
	glClearColor(red, green, blue, alpha);
  return env.Undefined();
}

// function clearDepth(depth: GLclampd): void;
Napi::Value clearDepth(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_ARGS(1);
	JS_ARG_TYPE(0, Number);
	JS_GLCLAMPD_ARG(0, depth);
	glClearDepth(depth);
	return env.Undefined();

}

// function clearIndex(c: GLfloat): void;
Napi::Value clearIndex(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(clearIndex);
  return env.Undefined();
}

// function clearStencil(s: GLint): void;
Napi::Value clearStencil(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(clearStencil);
  return env.Undefined();
}

// function clipPlane(plane: GLenum, equation: GLdouble[]): void;
Napi::Value clipPlane(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(clipPlane);
  return env.Undefined();
}

// function color3b(red: GLbyte, green: GLbyte, blue: GLbyte): void;
Napi::Value color3b(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(color3b);
  return env.Undefined();
}

// function color3bv(v: GLbyte[]): void;
Napi::Value color3bv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(color3bv);
  return env.Undefined();
}

// function color3d(red: GLdouble, green: GLdouble, blue: GLdouble): void;
Napi::Value color3d(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(color3d);
  return env.Undefined();
}

// function color3dv(v: GLdouble[]): void;
Napi::Value color3dv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(color3dv);
  return env.Undefined();
}

// function color3f(red: GLfloat, green: GLfloat, blue: GLfloat): void;
Napi::Value color3f(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
	JS_ARGS(3);
	JS_ARG_TYPE(0, Number);
	JS_ARG_TYPE(1, Number);
	JS_ARG_TYPE(2, Number);
	JS_GLFLOAT_ARG(0, red);
	JS_GLFLOAT_ARG(1, green);
	JS_GLFLOAT_ARG(2, blue);
	glColor3f(red, green, blue);
  return env.Undefined();
}

// function color3fv(v: GLfloat[]): void;
Napi::Value color3fv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(color3fv);
  return env.Undefined();
}

// function color3i(red: GLint, green: GLint, blue: GLint): void;
Napi::Value color3i(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(color3i);
  return env.Undefined();
}

// function color3iv(v: GLint[]): void;
Napi::Value color3iv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(color3iv);
  return env.Undefined();
}

// function color3s(red: GLshort, green: GLshort, blue: GLshort): void;
Napi::Value color3s(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(color3s);
  return env.Undefined();
}

// function color3sv(v: GLshort): void;
Napi::Value color3sv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(color3sv);
  return env.Undefined();
}

// function color3ub(red: GLubyte, green: GLubyte, blue: GLubyte): void;
Napi::Value color3ub(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(color3ub);
  return env.Undefined();
}

// function color3ubv(v: GLubyte): void;
Napi::Value color3ubv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(color3ubv);
  return env.Undefined();
}

// function color3ui(red: GLuint, green: GLuint, blue: GLuint): void;
Napi::Value color3ui(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(color3ui);
  return env.Undefined();
}

// function color3uiv(v: GLuint[]): void;
Napi::Value color3uiv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(color3uiv);
  return env.Undefined();
}

// function color3us(red: GLushort, green: GLushort, blue: GLushort): void;
Napi::Value color3us(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(color3us);
  return env.Undefined();
}

// function color3usv(v:GLushort[]): void;
Napi::Value color3usv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(color3usv);
  return env.Undefined();
}

// function color4b(red: GLbyte, green:GLbyte, blue:GLbyte, alpha: GLbyte): void;
Napi::Value color4b(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(color4b);
  return env.Undefined();
}

// function color4bv(v: GLbyte[]): void;
Napi::Value color4bv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(color4bv);
  return env.Undefined();
}

// function color4d(red: GLdouble, green: GLdouble, blue: GLdouble, alpha: GLdouble): void;
Napi::Value color4d(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(color4d);
  return env.Undefined();
}

// function color4dv(v: GLdouble[]): void;
Napi::Value color4dv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(color4dv);
  return env.Undefined();
}

// function color4f(red: GLfloat, green: GLfloat, blue: GLfloat, alpha: GLfloat): void;
Napi::Value color4f(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(color4f);
  return env.Undefined();
}

// function color4fv(v: GLfloat[]): void;
Napi::Value color4fv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(color4fv);
  return env.Undefined();
}

// function color4i(red: GLint, green: GLint, blue: GLint, alpha: GLint): void;
Napi::Value color4i(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(color4i);
  return env.Undefined();
}

// function color4iv(v: GLint[]): void;
Napi::Value color4iv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(color4iv);
  return env.Undefined();
}

// function color4s(red: GLshort, green: GLshort, blue: GLshort, alpha: GLshort): void;
Napi::Value color4s(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(color4s);
  return env.Undefined();
}

// function color4sv(v: GLshort): void;
Napi::Value color4sv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(color4sv);
  return env.Undefined();
}

// function color4ub(red: GLubyte, green: GLubyte, blue: GLubyte, alpha: GLubyte): void;
Napi::Value color4ub(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(color4ub);
  return env.Undefined();
}

// function color4ubv(v: GLubyte[]): void;
Napi::Value color4ubv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(color4ubv);
  return env.Undefined();
}

// function color4ui(red: GLuint, green: GLuint, blue: GLuint, alpha: GLuint): void;
Napi::Value color4ui(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(color4ui);
  return env.Undefined();
}

// function color4uiv(v: GLuint[]): void;
Napi::Value color4uiv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(color4uiv);
  return env.Undefined();
}

// function color4us(red: GLushort, green: GLushort, blue: GLushort, alpha: GLushort): void;
Napi::Value color4us(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(color4us);
  return env.Undefined();
}

// function color4usv(v: GLushort): void;
Napi::Value color4usv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(color4usv);
  return env.Undefined();
}

// function colorMask(red: GLboolean, green: GLboolean, blue: GLboolean, alpha: GLboolean): void;
Napi::Value colorMask(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(colorMask);
  return env.Undefined();
}

// function colorMaterial(face:GLenum , mode:GLenum ): void;
Napi::Value colorMaterial(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
	JS_ARGS(2);
	JS_ARG_TYPE(0, Number);
  JS_ARG_TYPE(1, Number);
	JS_GLENUM_ARG(0, face);
  JS_GLENUM_ARG(1, mode);
	glColorMaterial(face, mode);
  return env.Undefined();
}

// function colorPointer(size: GLint , type:GLenum , stride: GLsizei , pointer: []): void;
Napi::Value colorPointer(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(colorPointer);
  return env.Undefined();
}

// function copyPixels(x: GLint , y: GLint , width: GLsizei , height: GLsizei , type:GLenum ): void;
Napi::Value copyPixels(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(copyPixels);
  return env.Undefined();
}

// function copyTexImage1D(target:GLenum , level: GLint , internalFormat:GLenum , x: GLint , y: GLint , width: GLsizei , border: GLint ): void;
Napi::Value copyTexImage1D(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(copyTexImage1D);
  return env.Undefined();
}

// function copyTexImage2D(target:GLenum , level: GLint , internalFormat:GLenum , x: GLint , y: GLint , width: GLsizei , height: GLsizei , border: GLint ): void;
Napi::Value copyTexImage2D(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(copyTexImage2D);
  return env.Undefined();
}

// function copyTexSubImage1D(target:GLenum , level: GLint , xoffset: GLint , x: GLint , y: GLint , width: GLsizei ): void;
Napi::Value copyTexSubImage1D(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(copyTexSubImage1D);
  return env.Undefined();
}

// function copyTexSubImage2D(target:GLenum , level: GLint , xoffset: GLint , yoffset: GLint , x: GLint , y: GLint , width: GLsizei , height: GLsizei ): void;
Napi::Value copyTexSubImage2D(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(copyTexSubImage2D);
  return env.Undefined();
}

// function cullFace(mode:GLenum ): void;
Napi::Value cullFace(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(cullFace);
  return env.Undefined();
}

// function deleteLists(list: GLuint , range: GLsizei ): void;
Napi::Value deleteLists(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(deleteLists);
  return env.Undefined();
}

// function deleteTextures(n: GLsizei , textures: GLuint[]): void;
Napi::Value deleteTextures(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(deleteTextures);
  return env.Undefined();
}

// function depthFunc(func:GLenum ): void;
Napi::Value depthFunc(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_ARGS(1);
	JS_ARG_TYPE(0, Number);
	JS_GLENUM_ARG(0, func);
  glDepthFunc(func);
  return env.Undefined();
}

// function depthMask(flag: GLboolean ): void;
Napi::Value depthMask(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(depthMask);
  return env.Undefined();
}

// function depthRange(zNear: GLclampd , zFar: GLclampd ): void;
Napi::Value depthRange(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(depthRange);
  return env.Undefined();
}

// function disable(cap:GLenum ): void;
Napi::Value disable(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
	JS_ARGS(1);
	JS_ARG_TYPE(0, Number);
	JS_GLENUM_ARG(0, cap);
	glDisable(cap);
  return env.Undefined();
}

// function disableClientState(array:GLenum ): void;
Napi::Value disableClientState(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(disableClientState);
  return env.Undefined();
}

// function drawArrays(mode:GLenum , first: GLint , count: GLsizei ): void;
Napi::Value drawArrays(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();

  JS_ARGS(0);
  JS_GLENUM_ARG(0, mode);
  JS_GLINT_ARG(1, first);
  JS_GLSIZEI_ARG(2, count);

  glDrawArrays(mode, first, count);

  return env.Undefined();
}

// function drawBuffer(mode:GLenum ): void;
Napi::Value drawBuffer(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(drawBuffer);
  return env.Undefined();
}

// function drawElements(mode:GLenum , count: GLsizei , type:GLenum , indices: []): void;
Napi::Value drawElements(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(drawElements);
  return env.Undefined();
}

// function drawPixels(width: GLsizei , height: GLsizei , format:GLenum , type:GLenum , pixels: []): void;
Napi::Value drawPixels(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(drawPixels);
  return env.Undefined();
}

// function edgeFlag(flag: GLboolean ): void;
Napi::Value edgeFlag(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(edgeFlag);
  return env.Undefined();
}

// function edgeFlagPointer(stride: GLsizei, pointer: GLvoid[]): void;
Napi::Value edgeFlagPointer(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(edgeFlagPointer);
  return env.Undefined();
}

// function edgeFlagv(flag: GLboolean): void;
Napi::Value edgeFlagv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(edgeFlagv);
  return env.Undefined();
}

// function enable(cap: GLenum): void;
Napi::Value enable(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
	JS_ARGS(1);
	JS_ARG_TYPE(0, Number);
	JS_GLENUM_ARG(0, cap);
	glEnable(cap);
  return env.Undefined();
}

// function enableClientState(array: GLenum): void;
Napi::Value enableClientState(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(enableClientState);
  return env.Undefined();
}

// function end(): void;
Napi::Value end(const Napi::CallbackInfo& info) {
  glEnd();
  return info.Env().Undefined();
}

// function endList(): void;
Napi::Value endList(const Napi::CallbackInfo& info) {
  glEndList();
  return info.Env().Undefined();
}

// function evalCoord1d(u: GLdouble ): void;
Napi::Value evalCoord1d(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(evalCoord1d);
  return env.Undefined();
}

// function evalCoord1dv(u: GLdouble[]): void;
Napi::Value evalCoord1dv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(evalCoord1dv);
  return env.Undefined();
}

// function evalCoord1f(u:GLfloat ): void;
Napi::Value evalCoord1f(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(evalCoord1f);
  return env.Undefined();
}

// function evalCoord1fv(u: GLfloat[]): void;
Napi::Value evalCoord1fv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(evalCoord1fv);
  return env.Undefined();
}

// function evalCoord2d(u: GLdouble , v: GLdouble ): void;
Napi::Value evalCoord2d(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(evalCoord2d);
  return env.Undefined();
}

// function evalCoord2dv(u: GLdouble[]): void;
Napi::Value evalCoord2dv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(evalCoord2dv);
  return env.Undefined();
}

// function evalCoord2f(u:GLfloat , v: GLfloat): void;
Napi::Value evalCoord2f(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(evalCoord2f);
  return env.Undefined();
}

// function evalCoord2fv(u: GLfloat[]): void;
Napi::Value evalCoord2fv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(evalCoord2fv);
  return env.Undefined();
}

// function evalMesh1(mode:GLenum , i1: GLint , i2: GLint ): void;
Napi::Value evalMesh1(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(evalMesh1);
  return env.Undefined();
}

// function evalMesh2(mode:GLenum , i1: GLint , i2: GLint , j1: GLint , j2: GLint ): void;
Napi::Value evalMesh2(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(evalMesh2);
  return env.Undefined();
}

// function evalPoint1(i: GLint ): void;
Napi::Value evalPoint1(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(evalPoint1);
  return env.Undefined();
}

// function evalPoint2(i: GLint , j: GLint ): void;
Napi::Value evalPoint2(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(evalPoint2);
  return env.Undefined();
}

// function feedbackBuffer(size: GLsizei , type:GLenum , buffer: GLfloat[]): void;
Napi::Value feedbackBuffer(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(feedbackBuffer);
  return env.Undefined();
}

// function finish(): void;
Napi::Value finish(const Napi::CallbackInfo& info) {
  glFinish();
  return info.Env().Undefined();
}

// function flush(): void;
Napi::Value flush(const Napi::CallbackInfo& info) {
  glFlush();
  return info.Env().Undefined();
}

// function fogf(pname:GLenum , param: GLfloat): void;
Napi::Value fogf(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(fogf);
  return env.Undefined();
}

// function fogfv(pname:GLenum , params: GLfloat[]): void;
Napi::Value fogfv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(fogfv);
  return env.Undefined();
}

// function fogi(pname:GLenum , param: GLint ): void;
Napi::Value fogi(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(fogi);
  return env.Undefined();
}

// function fogiv(pname:GLenum , params: GLint[] ): void;
Napi::Value fogiv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(fogiv);
  return env.Undefined();
}

// function frontFace(mode:GLenum ): void;
Napi::Value frontFace(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(frontFace);
  return env.Undefined();
}

// function frustum(left: GLdouble, right: GLdouble, bottom: GLdouble, top: GLdouble, zNear: GLdouble , zFar: GLdouble ): void;
Napi::Value frustum(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(frustum);
  return env.Undefined();
}

// function genLists(range: GLsizei ): GLuint;
Napi::Value genLists(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(genLists);
  return env.Undefined();
}

// function genTextures(n: GLsizei , textures: GLuint[] ): void;
Napi::Value genTextures(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(genTextures);
  return env.Undefined();
}

// function getBooleanv(pname:GLenum , params: GLboolean[]): void;
Napi::Value getBooleanv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getBooleanv);
  return env.Undefined();
}

// function getClipPlane(plane:GLenum , equation: GLdouble[]): void;
Napi::Value getClipPlane(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getClipPlane);
  return env.Undefined();
}

// function getDoublev(pname:GLenum , params: GLdouble[]): void;
Napi::Value getDoublev(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getDoublev);
  return env.Undefined();
}

// function getError(): GLenum;
Napi::Value getError(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getError);
  return env.Undefined();
}

// function getFloatv(pname:GLenum ,params: GLfloat[]): void;
Napi::Value getFloatv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getFloatv);
  return env.Undefined();
}

// function getIntegerv(pname:GLenum ,params: GLint[] ): void;
Napi::Value getIntegerv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getIntegerv);
  return env.Undefined();
}

// function getLightfv(light:GLenum , pname:GLenum ,params: GLfloat[]): void;
Napi::Value getLightfv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getLightfv);
  return env.Undefined();
}

// function getLightiv(light:GLenum , pname:GLenum ,params: GLint[] ): void;
Napi::Value getLightiv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getLightiv);
  return env.Undefined();
}

// function getMapdv(target:GLenum , query:GLenum ,v: GLdouble[]): void;
Napi::Value getMapdv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getMapdv);
  return env.Undefined();
}

// function getMapfv(target:GLenum , query:GLenum ,v: GLfloat[]): void;
Napi::Value getMapfv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getMapfv);
  return env.Undefined();
}

// function getMapiv(target:GLenum , query:GLenum ,v: GLint[] ): void;
Napi::Value getMapiv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getMapiv);
  return env.Undefined();
}

// function getMaterialfv(face:GLenum , pname:GLenum ,params: GLfloat[]): void;
Napi::Value getMaterialfv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getMaterialfv);
  return env.Undefined();
}

// function getMaterialiv(face:GLenum , pname:GLenum ,params: GLint[]): void;
Napi::Value getMaterialiv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getMaterialiv);
  return env.Undefined();
}

// function getPixelMapfv(map:GLenum , values: GLfloat[]): void;
Napi::Value getPixelMapfv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getPixelMapfv);
  return env.Undefined();
}

// function getPixelMapuiv(map:GLenum , values: GLuint[] ): void;
Napi::Value getPixelMapuiv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getPixelMapuiv);
  return env.Undefined();
}

// function getPixelMapusv(map:GLenum , values: GLushort[]): void;
Napi::Value getPixelMapusv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getPixelMapusv);
  return env.Undefined();
}

// function getPointerv(pname:GLenum , params:[]): void;
Napi::Value getPointerv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getPointerv);
  return env.Undefined();
}

// function getPolygonStipple(mask: GLubyte[]): void;
Napi::Value getPolygonStipple(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getPolygonStipple);
  return env.Undefined();
}

// function getString(name:GLenum ): string;
Napi::Value getString(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getString);
  return env.Undefined();
}

// function getTexEnvfv(target:GLenum , pname:GLenum ,params: GLfloat[]): void;
Napi::Value getTexEnvfv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getTexEnvfv);
  return env.Undefined();
}

// function getTexEnviv(target:GLenum , pname:GLenum ,params: GLint[] ): void;
Napi::Value getTexEnviv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getTexEnviv);
  return env.Undefined();
}

// function getTexGendv(coord:GLenum , pname:GLenum , params: GLdouble[]): void;
Napi::Value getTexGendv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getTexGendv);
  return env.Undefined();
}

// function getTexGenfv(coord:GLenum , pname:GLenum ,params: GLfloat[]): void;
Napi::Value getTexGenfv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getTexGenfv);
  return env.Undefined();
}

// function getTexGeniv(coord:GLenum , pname:GLenum ,params: GLint[] ): void;
Napi::Value getTexGeniv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getTexGeniv);
  return env.Undefined();
}

// function getTexImage(target:GLenum , level: GLint , format:GLenum , type:GLenum , pixels: GLvoid[]): void;
Napi::Value getTexImage(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getTexImage);
  return env.Undefined();
}

// function getTexLevelParameterfv(target:GLenum , level: GLint , pname:GLenum ,params: GLfloat[]): void;
Napi::Value getTexLevelParameterfv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getTexLevelParameterfv);
  return env.Undefined();
}

// function getTexLevelParameteriv(target:GLenum , level: GLint , pname:GLenum ,params: GLint[] ): void;
Napi::Value getTexLevelParameteriv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getTexLevelParameteriv);
  return env.Undefined();
}

// function getTexParameterfv(target:GLenum , pname:GLenum ,params: GLfloat[]): void;
Napi::Value getTexParameterfv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getTexParameterfv);
  return env.Undefined();
}

// function getTexParameteriv(target:GLenum , pname:GLenum ,params: GLint[] ): void;
Napi::Value getTexParameteriv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getTexParameteriv);
  return env.Undefined();
}

// function hint(target:GLenum , mode:GLenum ): void;
Napi::Value hint(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_ARGS(2);
  JS_ARG_TYPE(0, Number);
  JS_ARG_TYPE(1, Number);
  JS_GLENUM_ARG(0, target);
  JS_GLENUM_ARG(1, mode);
  glHint(target, mode);
  return env.Undefined();
}

// function indexMask(mask: GLuint ): void;
Napi::Value indexMask(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(indexMask);
  return env.Undefined();
}

// function indexPointer(type:GLenum , stride: GLsizei , pointer: []): void;
Napi::Value indexPointer(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(indexPointer);
  return env.Undefined();
}

// function indexd(c: GLdouble ): void;
Napi::Value indexd(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(indexd);
  return env.Undefined();
}

// function indexdv(c: GLdouble[]): void;
Napi::Value indexdv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(indexdv);
  return env.Undefined();
}

// function indexf(c:GLfloat ): void;
Napi::Value indexf(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(indexf);
  return env.Undefined();
}

// function indexfv(c: GLfloat[]): void;
Napi::Value indexfv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(indexfv);
  return env.Undefined();
}

// function indexi(c: GLint ): void;
Napi::Value indexi(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(indexi);
  return env.Undefined();
}

// function indexiv(c: GLint[] ): void;
Napi::Value indexiv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(indexiv);
  return env.Undefined();
}

// function indexs(c: GLshort ): void;
Napi::Value indexs(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(indexs);
  return env.Undefined();
}

// function indexsv(c: GLshort[]): void;
Napi::Value indexsv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(indexsv);
  return env.Undefined();
}

// function indexub(c: GLubyte): void;
Napi::Value indexub(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(indexub);
  return env.Undefined();
}

// function indexubv(c: GLubyte[]): void;
Napi::Value indexubv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(indexubv);
  return env.Undefined();
}

// function initNames(): void;
Napi::Value initNames(const Napi::CallbackInfo& info) {
  glInitNames();
  return info.Env().Undefined();
}

// function interleavedArrays(format:GLenum , stride: GLsizei , pointer: []): void;
Napi::Value interleavedArrays(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(interleavedArrays);
  return env.Undefined();
}

// function isEnabled(cap:GLenum ): GLboolean;
Napi::Value isEnabled(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(isEnabled);
  return env.Undefined();
}

// function isList(list: GLuint ): GLboolean;
Napi::Value isList(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(isList);
  return env.Undefined();
}

// function isTexture(texture: GLuint ): GLboolean;
Napi::Value isTexture(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(isTexture);
  return env.Undefined();
}

// function lightModelf(pname:GLenum , param: GLfloat): void;
Napi::Value lightModelf(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(lightModelf);
  return env.Undefined();
}

// function lightModelfv(pname:GLenum , params: GLfloat[]): void;
Napi::Value lightModelfv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(lightModelfv);
  return env.Undefined();
}

// function lightModeli(pname:GLenum , param: GLint ): void;
Napi::Value lightModeli(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(lightModeli);
  return env.Undefined();
}

// function lightModeliv(pname:GLenum , params: GLint[] ): void;
Napi::Value lightModeliv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(lightModeliv);
  return env.Undefined();
}

// function lightf(light:GLenum , pname:GLenum , param: GLfloat): void;
Napi::Value lightf(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
	JS_ARGS(3);
	JS_ARG_TYPE(0, Number);
	JS_ARG_TYPE(1, Number);
	JS_ARG_TYPE(2, Number);
	JS_GLENUM_ARG(0, light);
	JS_GLENUM_ARG(1, pname);
	JS_GLFLOAT_ARG(2, param);
	glLightf(light, pname, param);
  return env.Undefined();
}

// function lightfv(light:GLenum , pname:GLenum , params: GLfloat[] | Float32Array): void;
Napi::Value lightfv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
	JS_ARGS(3);
	JS_ARG_TYPE(0, Number);
	JS_ARG_TYPE(1, Number);
	JS_ARG_TYPE(2, TypedArray);
	JS_GLENUM_ARG(0, light);
	JS_GLENUM_ARG(1, pname);
	GLfloat* params = info[2].As<Napi::Float32Array>().Data();
	glLightfv(light, pname, params);
  return env.Undefined();
}

// function lighti(light:GLenum , pname:GLenum , param: GLint ): void;
Napi::Value lighti(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(lighti);
  return env.Undefined();
}

// function lightiv(light:GLenum , pname:GLenum , params: GLint[] ): void;
Napi::Value lightiv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(lightiv);
  return env.Undefined();
}

// function lineStipple(factor: GLint , pattern: GLushort): void;
Napi::Value lineStipple(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(lineStipple);
  return env.Undefined();
}

// function lineWidth(width:GLfloat ): void;
Napi::Value lineWidth(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(lineWidth);
  return env.Undefined();
}

// function listBase(base: GLuint ): void;
Napi::Value listBase(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(listBase);
  return env.Undefined();
}

// function loadIdentity(): void;
Napi::Value loadIdentity(const Napi::CallbackInfo& info) {
  glLoadIdentity();
  return info.Env().Undefined();
}

// function loadMatrixd(m: GLdouble[]): void;
Napi::Value loadMatrixd(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(loadMatrixd);
  return env.Undefined();
}

// function loadMatrixf(m: GLfloat[]): void;
Napi::Value loadMatrixf(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(loadMatrixf);
  return env.Undefined();
}

// function loadName(name: GLuint ): void;
Napi::Value loadName(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(loadName);
  return env.Undefined();
}

// function logicOp(opcode:GLenum ): void;
Napi::Value logicOp(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(logicOp);
  return env.Undefined();
}

// function map1d(target:GLenum , u1: GLdouble, u2: GLdouble, stride: GLint , order: GLint , points: GLdouble[]): void;
Napi::Value map1d(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(map1d);
  return env.Undefined();
}

// function map1f(target:GLenum , u1: GLfloat, u2: GLfloat, stride: GLint , order: GLint , points: GLfloat[]): void;
Napi::Value map1f(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(map1f);
  return env.Undefined();
}

// function map2d(target:GLenum , u1: GLdouble, u2: GLdouble, ustride: GLint , uorder: GLint , v1: GLdouble, v2: GLdouble, vstride: GLint , vorder: GLint , points: GLdouble[]): void;
Napi::Value map2d(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(map2d);
  return env.Undefined();
}

// function map2f(target:GLenum , u1: GLfloat, u2: GLfloat, ustride: GLint , uorder: GLint , v1: GLfloat, v2: GLfloat, vstride: GLint , vorder: GLint , points: GLfloat[]): void;
Napi::Value map2f(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(map2f);
  return env.Undefined();
}

// function mapGrid1d(un: GLint , u1: GLdouble, u2: GLdouble): void;
Napi::Value mapGrid1d(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(mapGrid1d);
  return env.Undefined();
}

// function mapGrid1f(un: GLint , u1: GLfloat, u2: GLfloat): void;
Napi::Value mapGrid1f(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(mapGrid1f);
  return env.Undefined();
}

// function mapGrid2d(un: GLint , u1: GLdouble, u2: GLdouble, vn: GLint , v1: GLdouble, v2: GLdouble): void;
Napi::Value mapGrid2d(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(mapGrid2d);
  return env.Undefined();
}

// function mapGrid2f(un: GLint , u1: GLfloat, u2: GLfloat, vn: GLint , v1: GLfloat, v2: GLfloat): void;
Napi::Value mapGrid2f(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(mapGrid2f);
  return env.Undefined();
}

// function materialf(face:GLenum , pname:GLenum , param: GLfloat): void;
Napi::Value materialf(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
	JS_ARGS(3);
	JS_ARG_TYPE(0, Number);
	JS_ARG_TYPE(1, Number);
	JS_ARG_TYPE(2, Number);
	JS_GLENUM_ARG(0, face);
	JS_GLENUM_ARG(1, pname);
	JS_GLFLOAT_ARG(2, param);
	glMaterialf(face, pname, param);
  return env.Undefined();
}

// function materialfv(face:GLenum , pname:GLenum , params: GLfloat[] | Float32Array): void;
Napi::Value materialfv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
	JS_ARGS(3);
	JS_ARG_TYPE(0, Number);
	JS_ARG_TYPE(1, Number);
	JS_ARG_TYPE(2, TypedArray);
	JS_GLENUM_ARG(0, face);
	JS_GLENUM_ARG(1, pname);


	// GLfloat* params = info[2].As<Napi::Float32Array>().Data();

  const auto paramsArr = info[2].As<Napi::Float32Array>();



	glMaterialfv(face, pname, paramsArr.Data());
  return env.Undefined();
}

// function materiali(face:GLenum , pname:GLenum , param: GLint ): void;
Napi::Value materiali(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(materiali);
  return env.Undefined();
}

// function materialiv(face:GLenum , pname:GLenum , params: GLint[] ): void;
Napi::Value materialiv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(materialiv);
  return env.Undefined();
}

// function matrixMode(mode: GLenum): void;
Napi::Value matrixMode(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
	JS_ARGS(1);
	JS_ARG_TYPE(0, Number);
	JS_GLENUM_ARG(0, mode);
	glMatrixMode(mode);
  return env.Undefined();
}

// function multMatrixd(m: GLdouble[]): void;
Napi::Value multMatrixd(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(multMatrixd);
  return env.Undefined();
}

// function multMatrixf(m: GLfloat[]): void;
Napi::Value multMatrixf(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(multMatrixf);
  return env.Undefined();
}

// function newList(list: GLuint , mode:GLenum ): void;
Napi::Value newList(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
	JS_ARGS(2);
	JS_ARG_TYPE(0, Number);
	JS_ARG_TYPE(1, Number);
	JS_GLUINT_ARG(0, list);
	JS_GLENUM_ARG(1, mode);
	glNewList(list, mode);
  return env.Undefined();
}

// function normal3b(nx: GLbyte, ny: GLbyte, nz: GLbyte): void;
Napi::Value normal3b(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(normal3b);
  return env.Undefined();
}

// function normal3bv(v: GLbyte[]): void;
Napi::Value normal3bv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(normal3bv);
  return env.Undefined();
}

// function normal3d(nx: GLdouble, ny: GLdouble, nz: GLdouble): void;
Napi::Value normal3d(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(normal3d);
  return env.Undefined();
}

// function normal3dv(v: GLdouble[]): void;
Napi::Value normal3dv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(normal3dv);
  return env.Undefined();
}

// function normal3f(nx:GLfloat , ny: GLfloat, nz: GLfloat): void;
Napi::Value normal3f(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
	JS_ARGS(3);
	JS_ARG_TYPE(0, Number);
	JS_ARG_TYPE(1, Number);
	JS_ARG_TYPE(2, Number);
	JS_GLFLOAT_ARG(0, nx);
	JS_GLFLOAT_ARG(1, ny);
	JS_GLFLOAT_ARG(2, nz);
	glNormal3f(nx, ny, nz);
  return env.Undefined();
}

// function normal3fv(v: GLfloat[]): void;
Napi::Value normal3fv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(normal3fv);
  return env.Undefined();
}

// function normal3i(nx: GLint , ny: GLint , nz: GLint ): void;
Napi::Value normal3i(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(normal3i);
  return env.Undefined();
}

// function normal3iv(v: GLint[] ): void;
Napi::Value normal3iv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(normal3iv);
  return env.Undefined();
}

// function normal3s(nx: GLshort , ny: GLshort , nz: GLshort ): void;
Napi::Value normal3s(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(normal3s);
  return env.Undefined();
}

// function normal3sv(v: GLshort[]): void;
Napi::Value normal3sv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(normal3sv);
  return env.Undefined();
}

// function normalPointer(type:GLenum , stride: GLsizei , pointer: []): void;
Napi::Value normalPointer(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(normalPointer);
  return env.Undefined();
}

// function ortho(left: GLdouble, right: GLdouble, bottom: GLdouble,  top: GLdouble, zNear: GLdouble, zFar: GLdouble): void;
Napi::Value ortho(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(ortho);
  return env.Undefined();
}

// function passThrough(token: GLfloat): void;
Napi::Value passThrough(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(passThrough);
  return env.Undefined();
}

// function pixelMapfv(map:GLenum , mapsize: GLsizei , values: GLfloat[]): void;
Napi::Value pixelMapfv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(pixelMapfv);
  return env.Undefined();
}

// function pixelMapuiv(map:GLenum , mapsize: GLsizei , values: GLuint[]): void;
Napi::Value pixelMapuiv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(pixelMapuiv);
  return env.Undefined();
}

// function pixelMapusv(map:GLenum , mapsize: GLsizei , values: GLushort[]): void;
Napi::Value pixelMapusv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(pixelMapusv);
  return env.Undefined();
}

// function pixelStoref(pname:GLenum , param: GLfloat): void;
Napi::Value pixelStoref(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(pixelStoref);
  return env.Undefined();
}

// function pixelStorei(pname:GLenum , param: GLint ): void;
Napi::Value pixelStorei(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(pixelStorei);
  return env.Undefined();
}

// function pixelTransferf(pname:GLenum , param: GLfloat): void;
Napi::Value pixelTransferf(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(pixelTransferf);
  return env.Undefined();
}

// function pixelTransferi(pname:GLenum , param: GLint ): void;
Napi::Value pixelTransferi(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(pixelTransferi);
  return env.Undefined();
}

// function pixelZoom(xfactor:GLfloat , yfactor: GLfloat): void;
Napi::Value pixelZoom(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(pixelZoom);
  return env.Undefined();
}

// function pointSize(size: GLfloat): void;
Napi::Value pointSize(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
	JS_ARGS(1);
	JS_ARG_TYPE(0, Number);
	JS_GLFLOAT_ARG(0, size);
	glPointSize(size);
  return env.Undefined();
}

// function polygonMode(face:GLenum , mode:GLenum ): void;
Napi::Value polygonMode(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(polygonMode);
  return env.Undefined();
}

// function polygonOffset(factor:GLfloat , units: GLfloat): void;
Napi::Value polygonOffset(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(polygonOffset);
  return env.Undefined();
}

// function polygonStipple(mask: GLubyte[]): void;
Napi::Value polygonStipple(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(polygonStipple);
  return env.Undefined();
}

// function popAttrib(): void;
Napi::Value popAttrib(const Napi::CallbackInfo& info) {
  glPopAttrib();
  return info.Env().Undefined();
}

// function popClientAttrib(): void;
Napi::Value popClientAttrib(const Napi::CallbackInfo& info) {
  glPopClientAttrib();
  return info.Env().Undefined();
}

// function popMatrix(): void;
Napi::Value popMatrix(const Napi::CallbackInfo& info) {
  glPopMatrix();
  return info.Env().Undefined();
}

// function popName(): void;
Napi::Value popName(const Napi::CallbackInfo& info) {
  glPopName();
  return info.Env().Undefined();
}

// function prioritizeTextures(n: GLsizei , textures: GLuint[], priorities: GLclampf[]): void;
Napi::Value prioritizeTextures(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(prioritizeTextures);
  return env.Undefined();
}

// function pushAttrib(mask:GLbitfield ): void;
Napi::Value pushAttrib(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(pushAttrib);
  return env.Undefined();
}

// function pushClientAttrib(mask:GLbitfield ): void;
Napi::Value pushClientAttrib(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(pushClientAttrib);
  return env.Undefined();
}

// function pushMatrix(): void;
Napi::Value pushMatrix(const Napi::CallbackInfo& info) {
  glPushMatrix();
  return info.Env().Undefined();
}

// function pushName(name: GLuint ): void;
Napi::Value pushName(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(pushName);
  return env.Undefined();
}

// function rasterPos2d(x: GLdouble , y: GLdouble ): void;
Napi::Value rasterPos2d(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(rasterPos2d);
  return env.Undefined();
}

// function rasterPos2dv(v: GLdouble[]): void;
Napi::Value rasterPos2dv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(rasterPos2dv);
  return env.Undefined();
}

// function rasterPos2f(x:GLfloat , y: GLfloat): void;
Napi::Value rasterPos2f(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(rasterPos2f);
  return env.Undefined();
}

// function rasterPos2fv(v: GLfloat[]): void;
Napi::Value rasterPos2fv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(rasterPos2fv);
  return env.Undefined();
}

// function rasterPos2i(x: GLint , y: GLint ): void;
Napi::Value rasterPos2i(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(rasterPos2i);
  return env.Undefined();
}

// function rasterPos2iv(v: GLint[] ): void;
Napi::Value rasterPos2iv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(rasterPos2iv);
  return env.Undefined();
}

// function rasterPos2s(x: GLshort , y: GLshort ): void;
Napi::Value rasterPos2s(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(rasterPos2s);
  return env.Undefined();
}

// function rasterPos2sv(v: GLshort[]): void;
Napi::Value rasterPos2sv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(rasterPos2sv);
  return env.Undefined();
}

// function rasterPos3d(x: GLdouble , y: GLdouble , z: GLdouble ): void;
Napi::Value rasterPos3d(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(rasterPos3d);
  return env.Undefined();
}

// function rasterPos3dv(v: GLdouble[]): void;
Napi::Value rasterPos3dv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(rasterPos3dv);
  return env.Undefined();
}

// function rasterPos3f(x:GLfloat , y: GLfloat, z: GLfloat): void;
Napi::Value rasterPos3f(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(rasterPos3f);
  return env.Undefined();
}

// function rasterPos3fv(v: GLfloat[]): void;
Napi::Value rasterPos3fv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(rasterPos3fv);
  return env.Undefined();
}

// function rasterPos3i(x: GLint , y: GLint , z: GLint ): void;
Napi::Value rasterPos3i(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(rasterPos3i);
  return env.Undefined();
}

// function rasterPos3iv(v: GLint[] ): void;
Napi::Value rasterPos3iv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(rasterPos3iv);
  return env.Undefined();
}

// function rasterPos3s(x: GLshort , y: GLshort , z: GLshort ): void;
Napi::Value rasterPos3s(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(rasterPos3s);
  return env.Undefined();
}

// function rasterPos3sv(v: GLshort[]): void;
Napi::Value rasterPos3sv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(rasterPos3sv);
  return env.Undefined();
}

// function rasterPos4d(x: GLdouble , y: GLdouble , z: GLdouble , w: GLdouble ): void;
Napi::Value rasterPos4d(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(rasterPos4d);
  return env.Undefined();
}

// function rasterPos4dv(v: GLdouble[]): void;
Napi::Value rasterPos4dv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(rasterPos4dv);
  return env.Undefined();
}

// function rasterPos4f(x:GLfloat , y: GLfloat, z: GLfloat, w: GLfloat): void;
Napi::Value rasterPos4f(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(rasterPos4f);
  return env.Undefined();
}

// function rasterPos4fv(v: GLfloat[]): void;
Napi::Value rasterPos4fv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(rasterPos4fv);
  return env.Undefined();
}

// function rasterPos4i(x: GLint , y: GLint , z: GLint , w: GLint ): void;
Napi::Value rasterPos4i(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(rasterPos4i);
  return env.Undefined();
}

// function rasterPos4iv(v: GLint[] ): void;
Napi::Value rasterPos4iv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(rasterPos4iv);
  return env.Undefined();
}

// function rasterPos4s(x: GLshort , y: GLshort , z: GLshort , w: GLshort ): void;
Napi::Value rasterPos4s(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(rasterPos4s);
  return env.Undefined();
}

// function rasterPos4sv(v: GLshort[]): void;
Napi::Value rasterPos4sv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(rasterPos4sv);
  return env.Undefined();
}

// function readBuffer(mode:GLenum ): void;
Napi::Value readBuffer(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(readBuffer);
  return env.Undefined();
}

// function readPixels(x: GLint , y: GLint , width: GLsizei , height: GLsizei , format:GLenum , type:GLenum , pixels: GLvoid[]): void;
Napi::Value readPixels(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(readPixels);
  return env.Undefined();
}

// function rectd(x1: GLdouble, y1: GLdouble, x2: GLdouble, y2: GLdouble): void;
Napi::Value rectd(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(rectd);
  return env.Undefined();
}

// function rectdv(v1: GLdouble[], v2: GLdouble[]): void;
Napi::Value rectdv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(rectdv);
  return env.Undefined();
}

// function rectf(x1:GLfloat , y1: GLfloat, x2: GLfloat, y2: GLfloat): void;
Napi::Value rectf(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(rectf);
  return env.Undefined();
}

// function rectfv(v1: GLfloat[], v2: GLfloat[]): void;
Napi::Value rectfv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(rectfv);
  return env.Undefined();
}

// function recti(x1: GLint , y1: GLint , x2: GLint , y2: GLint ): void;
Napi::Value recti(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(recti);
  return env.Undefined();
}

// function rectiv(v1: GLint[] , v2: GLint[]): void;
Napi::Value rectiv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(rectiv);
  return env.Undefined();
}

// function rects(x1: GLshort , y1: GLshort , x2: GLshort , y2: GLshort ): void;
Napi::Value rects(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(rects);
  return env.Undefined();
}

// function rectsv(v1: GLshort[], v2: GLshort[]): void;
Napi::Value rectsv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(rectsv);
  return env.Undefined();
}

// function renderMode(mode: GLenum): GLint;
Napi::Value renderMode(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(renderMode);
  return env.Undefined();
}

// function rotated(angle: GLdouble , x: GLdouble , y: GLdouble , z: GLdouble ): void;
Napi::Value rotated(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(rotated);
  return env.Undefined();
}

// function rotatef(angle: GLfloat, x: GLfloat, y: GLfloat, z: GLfloat): void;
Napi::Value rotatef(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
	JS_ARGS(4);
	JS_ARG_TYPE(0, Number);
	JS_ARG_TYPE(1, Number);
	JS_ARG_TYPE(2, Number);
  JS_ARG_TYPE(3, Number);
	JS_GLFLOAT_ARG(0, angle);
  JS_GLFLOAT_ARG(1, x);
	JS_GLFLOAT_ARG(2, y);
	JS_GLFLOAT_ARG(3, z);
	glRotatef(angle, x, y, z);
  return env.Undefined();
}

// function scaled(x: GLdouble , y: GLdouble , z: GLdouble ): void;
Napi::Value scaled(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(scaled);
  return env.Undefined();
}

// function scalef(x:GLfloat , y: GLfloat, z: GLfloat): void;
Napi::Value scalef(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(scalef);
  return env.Undefined();
}

// function scissor(x: GLint , y: GLint , width: GLsizei , height: GLsizei ): void;
Napi::Value scissor(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(scissor);
  return env.Undefined();
}

// function selectBuffer(size: GLsizei , buffer: GLuint[] ): void;
Napi::Value selectBuffer(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(selectBuffer);
  return env.Undefined();
}

// function shadeModel(mode:GLenum ): void;
Napi::Value shadeModel(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_ARGS(1);
	JS_ARG_TYPE(0, Number);
  JS_GLENUM_ARG(0, mode);
  glShadeModel(mode);
  return env.Undefined();
}

// function stencilFunc(func:GLenum , ref: GLint , mask: GLuint ): void;
Napi::Value stencilFunc(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(stencilFunc);
  return env.Undefined();
}

// function stencilMask(mask: GLuint ): void;
Napi::Value stencilMask(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(stencilMask);
  return env.Undefined();
}

// function stencilOp(fail:GLenum , zfail:GLenum , zpass:GLenum ): void;
Napi::Value stencilOp(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(stencilOp);
  return env.Undefined();
}

// function texCoord1d(s: GLdouble ): void;
Napi::Value texCoord1d(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texCoord1d);
  return env.Undefined();
}

// function texCoord1dv(v: GLdouble[]): void;
Napi::Value texCoord1dv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texCoord1dv);
  return env.Undefined();
}

// function texCoord1f(s:GLfloat ): void;
Napi::Value texCoord1f(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texCoord1f);
  return env.Undefined();
}

// function texCoord1fv(v: GLfloat[]): void;
Napi::Value texCoord1fv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texCoord1fv);
  return env.Undefined();
}

// function texCoord1i(s: GLint ): void;
Napi::Value texCoord1i(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texCoord1i);
  return env.Undefined();
}

// function texCoord1iv(v: GLint[] ): void;
Napi::Value texCoord1iv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texCoord1iv);
  return env.Undefined();
}

// function texCoord1s(s: GLshort ): void;
Napi::Value texCoord1s(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texCoord1s);
  return env.Undefined();
}

// function texCoord1sv(v: GLshort[]): void;
Napi::Value texCoord1sv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texCoord1sv);
  return env.Undefined();
}

// function texCoord2d(s: GLdouble , t: GLdouble ): void;
Napi::Value texCoord2d(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texCoord2d);
  return env.Undefined();
}

// function texCoord2dv(v: GLdouble[]): void;
Napi::Value texCoord2dv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texCoord2dv);
  return env.Undefined();
}

// function texCoord2f(s:GLfloat , t: GLfloat): void;
Napi::Value texCoord2f(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texCoord2f);
  return env.Undefined();
}

// function texCoord2fv(v: GLfloat[]): void;
Napi::Value texCoord2fv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texCoord2fv);
  return env.Undefined();
}

// function texCoord2i(s: GLint , t: GLint ): void;
Napi::Value texCoord2i(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texCoord2i);
  return env.Undefined();
}

// function texCoord2iv(v: GLint[] ): void;
Napi::Value texCoord2iv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texCoord2iv);
  return env.Undefined();
}

// function texCoord2s(s: GLshort , t: GLshort ): void;
Napi::Value texCoord2s(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texCoord2s);
  return env.Undefined();
}

// function texCoord2sv(v: GLshort[]): void;
Napi::Value texCoord2sv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texCoord2sv);
  return env.Undefined();
}

// function texCoord3d(s: GLdouble , t: GLdouble , r: GLdouble ): void;
Napi::Value texCoord3d(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texCoord3d);
  return env.Undefined();
}

// function texCoord3dv(v: GLdouble[]): void;
Napi::Value texCoord3dv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texCoord3dv);
  return env.Undefined();
}

// function texCoord3f(s:GLfloat , t: GLfloat, r: GLfloat): void;
Napi::Value texCoord3f(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texCoord3f);
  return env.Undefined();
}

// function texCoord3fv(v: GLfloat[]): void;
Napi::Value texCoord3fv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texCoord3fv);
  return env.Undefined();
}

// function texCoord3i(s: GLint , t: GLint , r: GLint ): void;
Napi::Value texCoord3i(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texCoord3i);
  return env.Undefined();
}

// function texCoord3iv(v: GLint[] ): void;
Napi::Value texCoord3iv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texCoord3iv);
  return env.Undefined();
}

// function texCoord3s(s: GLshort , t: GLshort , r: GLshort ): void;
Napi::Value texCoord3s(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texCoord3s);
  return env.Undefined();
}

// function texCoord3sv(v: GLshort[]): void;
Napi::Value texCoord3sv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texCoord3sv);
  return env.Undefined();
}

// function texCoord4d(s: GLdouble , t: GLdouble , r: GLdouble , q: GLdouble ): void;
Napi::Value texCoord4d(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texCoord4d);
  return env.Undefined();
}

// function texCoord4dv(v: GLdouble[]): void;
Napi::Value texCoord4dv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texCoord4dv);
  return env.Undefined();
}

// function texCoord4f(s:GLfloat , t: GLfloat, r: GLfloat, q: GLfloat): void;
Napi::Value texCoord4f(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texCoord4f);
  return env.Undefined();
}

// function texCoord4fv(v: GLfloat[]): void;
Napi::Value texCoord4fv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texCoord4fv);
  return env.Undefined();
}

// function texCoord4i(s: GLint , t: GLint , r: GLint , q: GLint ): void;
Napi::Value texCoord4i(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texCoord4i);
  return env.Undefined();
}

// function texCoord4iv(v: GLint[] ): void;
Napi::Value texCoord4iv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texCoord4iv);
  return env.Undefined();
}

// function texCoord4s(s: GLshort , t: GLshort , r: GLshort , q: GLshort ): void;
Napi::Value texCoord4s(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texCoord4s);
  return env.Undefined();
}

// function texCoord4sv(v: GLshort[]): void;
Napi::Value texCoord4sv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texCoord4sv);
  return env.Undefined();
}

// function texCoordPointer(size: GLint , type:GLenum , stride: GLsizei , pointer: []): void;
Napi::Value texCoordPointer(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texCoordPointer);
  return env.Undefined();
}

// function texEnvf(target:GLenum , pname:GLenum , param: GLfloat): void;
Napi::Value texEnvf(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texEnvf);
  return env.Undefined();
}

// function texEnvfv(target:GLenum , pname:GLenum , params: GLfloat[]): void;
Napi::Value texEnvfv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texEnvfv);
  return env.Undefined();
}

// function texEnvi(target:GLenum , pname:GLenum , param: GLint ): void;
Napi::Value texEnvi(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texEnvi);
  return env.Undefined();
}

// function texEnviv(target:GLenum , pname:GLenum , params: GLint[] ): void;
Napi::Value texEnviv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texEnviv);
  return env.Undefined();
}

// function texGend(coord:GLenum , pname:GLenum , param: GLdouble): void;
Napi::Value texGend(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texGend);
  return env.Undefined();
}

// function texGendv(coord:GLenum , pname:GLenum , params: GLdouble[]): void;
Napi::Value texGendv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texGendv);
  return env.Undefined();
}

// function texGenf(coord:GLenum , pname:GLenum , param: GLfloat): void;
Napi::Value texGenf(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texGenf);
  return env.Undefined();
}

// function texGenfv(coord:GLenum , pname:GLenum , params: GLfloat[]): void;
Napi::Value texGenfv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texGenfv);
  return env.Undefined();
}

// function texGeni(coord:GLenum , pname:GLenum , param: GLint ): void;
Napi::Value texGeni(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texGeni);
  return env.Undefined();
}

// function texGeniv(coord:GLenum , pname:GLenum , params: GLint[] ): void;
Napi::Value texGeniv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texGeniv);
  return env.Undefined();
}

// function texImage1D(target:GLenum , level: GLint , internalformat: GLint , width: GLsizei , border: GLint , format:GLenum , type:GLenum , pixels: []): void;
Napi::Value texImage1D(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texImage1D);
  return env.Undefined();
}

// function texImage2D(target:GLenum , level: GLint , internalformat: GLint , width: GLsizei , height: GLsizei , border: GLint , format:GLenum , type:GLenum , pixels: []): void;
Napi::Value texImage2D(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texImage2D);
  return env.Undefined();
}

// function texParameterf(target:GLenum , pname:GLenum , param: GLfloat): void;
Napi::Value texParameterf(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texParameterf);
  return env.Undefined();
}

// function texParameterfv(target:GLenum , pname:GLenum , params: GLfloat[]): void;
Napi::Value texParameterfv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texParameterfv);
  return env.Undefined();
}

// function texParameteri(target:GLenum , pname:GLenum , param: GLint ): void;
Napi::Value texParameteri(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texParameteri);
  return env.Undefined();
}

// function texParameteriv(target:GLenum , pname:GLenum , params: GLint[] ): void;
Napi::Value texParameteriv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texParameteriv);
  return env.Undefined();
}

// function texSubImage1D(target:GLenum , level: GLint , xoffset: GLint , width: GLsizei , format:GLenum , type:GLenum , pixels: []): void;
Napi::Value texSubImage1D(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texSubImage1D);
  return env.Undefined();
}

// function texSubImage2D(target:GLenum , level: GLint , xoffset: GLint , yoffset: GLint , width: GLsizei , height: GLsizei , format:GLenum , type:GLenum , pixels: []): void;
Napi::Value texSubImage2D(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texSubImage2D);
  return env.Undefined();
}

// function translated(x: GLdouble , y: GLdouble , z: GLdouble ): void;
Napi::Value translated(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(translated);
  return env.Undefined();
}

// function translatef(x: GLfloat, y: GLfloat, z: GLfloat): void;
Napi::Value translatef(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_ARGS(3);
	JS_ARG_TYPE(0, Number);
  JS_ARG_TYPE(1, Number);
  JS_ARG_TYPE(2, Number);
	JS_GLFLOAT_ARG(0, x);
  JS_GLFLOAT_ARG(1, y);
  JS_GLFLOAT_ARG(2, z);
  glTranslatef(x, y, z);
  return env.Undefined();
}

// function vertex2d(x: GLdouble , y: GLdouble ): void;
Napi::Value vertex2d(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertex2d);
  return env.Undefined();
}

// function vertex2dv(v: GLdouble[]): void;
Napi::Value vertex2dv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertex2dv);
  return env.Undefined();
}

// function vertex2f(x: GLfloat, y: GLfloat): void;
Napi::Value vertex2f(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
	JS_ARGS(2);
	JS_ARG_TYPE(0, Number);
	JS_ARG_TYPE(1, Number);
	JS_GLFLOAT_ARG(0, x);
	JS_GLFLOAT_ARG(1, y);
	glVertex2f(x, y);
  return env.Undefined();
}

// function vertex2fv(v: GLfloat[]): void;
Napi::Value vertex2fv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertex2fv);
  return env.Undefined();
}

// function vertex2i(x: GLint , y: GLint ): void;
Napi::Value vertex2i(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertex2i);
  return env.Undefined();
}

// function vertex2iv(v: GLint[] ): void;
Napi::Value vertex2iv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertex2iv);
  return env.Undefined();
}

// function vertex2s(x: GLshort , y: GLshort ): void;
Napi::Value vertex2s(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertex2s);
  return env.Undefined();
}

// function vertex2sv(v: GLshort[]): void;
Napi::Value vertex2sv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertex2sv);
  return env.Undefined();
}

// function vertex3d(x: GLdouble , y: GLdouble , z: GLdouble ): void;
Napi::Value vertex3d(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertex3d);
  return env.Undefined();
}

// function vertex3dv(v: GLdouble[]): void;
Napi::Value vertex3dv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertex3dv);
  return env.Undefined();
}

// function vertex3f(x: GLfloat, y: GLfloat, z: GLfloat): void;
Napi::Value vertex3f(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
	JS_ARGS(3);
	JS_ARG_TYPE(0, Number);
	JS_ARG_TYPE(1, Number);
	JS_ARG_TYPE(2, Number);
	JS_GLFLOAT_ARG(0, x);
	JS_GLFLOAT_ARG(1, y);
	JS_GLFLOAT_ARG(2, z);
	glVertex3f(x, y, z);
  return env.Undefined();
}

// function vertex3fv(v: GLfloat[]): void;
Napi::Value vertex3fv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertex3fv);
  return env.Undefined();
}

// function vertex3i(x: GLint , y: GLint , z: GLint ): void;
Napi::Value vertex3i(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertex3i);
  return env.Undefined();
}

// function vertex3iv(v: GLint[]): void;
Napi::Value vertex3iv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertex3iv);
  return env.Undefined();
}

// function vertex3s(x: GLshort , y: GLshort , z: GLshort ): void;
Napi::Value vertex3s(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertex3s);
  return env.Undefined();
}

// function vertex3sv(v: GLshort[]): void;
Napi::Value vertex3sv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertex3sv);
  return env.Undefined();
}

// function vertex4d(x: GLdouble , y: GLdouble , z: GLdouble , w: GLdouble ): void;
Napi::Value vertex4d(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertex4d);
  return env.Undefined();
}

// function vertex4dv(v: GLdouble[]): void;
Napi::Value vertex4dv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertex4dv);
  return env.Undefined();
}

// function vertex4f(x:GLfloat , y: GLfloat, z: GLfloat, w: GLfloat): void;
Napi::Value vertex4f(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertex4f);
  return env.Undefined();
}

// function vertex4fv(v: GLfloat[]): void;
Napi::Value vertex4fv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertex4fv);
  return env.Undefined();
}

// function vertex4i(x: GLint , y: GLint , z: GLint , w: GLint ): void;
Napi::Value vertex4i(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertex4i);
  return env.Undefined();
}

// function vertex4iv(v: GLint[]): void;
Napi::Value vertex4iv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertex4iv);
  return env.Undefined();
}

// function vertex4s(x: GLshort , y: GLshort , z: GLshort , w: GLshort ): void;
Napi::Value vertex4s(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertex4s);
  return env.Undefined();
}

// function vertex4sv(v: GLshort[]): void;
Napi::Value vertex4sv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertex4sv);
  return env.Undefined();
}

// function vertexPointer(size: GLint , type:GLenum , stride: GLsizei , pointer: []): void;
Napi::Value vertexPointer(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexPointer);
  return env.Undefined();
}

// function viewport(x: GLint, y: GLint, width: GLsizei, height: GLsizei): void;
Napi::Value viewport(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
	JS_ARGS(4);
	JS_ARG_TYPE(0, Number);
	JS_ARG_TYPE(1, Number);
	JS_ARG_TYPE(2, Number);
  JS_ARG_TYPE(3, Number);
	JS_GLINT_ARG(0, x);
	JS_GLINT_ARG(1, y);
	JS_GLSIZEI_ARG(2, width);
  JS_GLSIZEI_ARG(3, height);
	glViewport(x, y, width, height);
  return env.Undefined();
}


    // GLEW

//function init(): GLenum;
// function isSupported(name: string): GLboolean;
Napi::Value isSupported(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
	JS_ARGS(1);
	JS_ARG_TYPE(0, String);
	JS_STR_ARG(0, name);
  return Napi::Number::New(env, glewIsSupported(name.c_str()));
}


    // GL_VERSION_1_2
// function copyTexSubImage3D(target: GLenum, level: GLint, xoffset: GLint, yoffset: GLint, zoffset: GLint , x: GLint, y: GLint, width: GLsizei, height: GLsizei): void;
Napi::Value copyTexSubImage3D(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(copyTexSubImage3D);
  return env.Undefined();
}

// function drawRangeElements(mode: GLenum, start: GLuint, end: GLuint, count: GLsizei, type: GLenum, indices:[]): void;
Napi::Value drawRangeElements(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(drawRangeElements);
  return env.Undefined();
}

// function texImage3D(target:GLenum , level:GLint , internalFormat:GLint , width:GLsizei , height:GLsizei , depth:GLsizei , border:GLint , format:GLenum , type:GLenum , pixels:[]): void;
Napi::Value texImage3D(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texImage3D);
  return env.Undefined();
}

// function texSubImage3D(target:GLenum , level:GLint , xoffset:GLint , yoffset:GLint , zoffset:GLint , width:GLsizei , height:GLsizei , depth:GLsizei , format:GLenum , type:GLenum , pixels:[]): void;
Napi::Value texSubImage3D(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texSubImage3D);
  return env.Undefined();
}




    // GL_VERSION_1_3
// function activeTexture(texture:GLenum ): void;
Napi::Value activeTexture(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(activeTexture);
  return env.Undefined();
}

// function clientActiveTexture(texture:GLenum ): void;
Napi::Value clientActiveTexture(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(clientActiveTexture);
  return env.Undefined();
}

// function compressedTexImage1D(target:GLenum ,level:GLint, internalformat:GLenum , width:GLsizei ,border:GLint, imageSize:GLsizei , data:[]): void;
Napi::Value compressedTexImage1D(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(compressedTexImage1D);
  return env.Undefined();
}

// function compressedTexImage2D(target:GLenum ,level:GLint, internalformat:GLenum , width:GLsizei , height:GLsizei ,border:GLint, imageSize:GLsizei , data:[]): void;
Napi::Value compressedTexImage2D(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(compressedTexImage2D);
  return env.Undefined();
}

// function compressedTexImage3D(target:GLenum ,level:GLint, internalformat:GLenum , width:GLsizei , height:GLsizei , depth:GLsizei ,border:GLint, imageSize:GLsizei , data:[]): void;
Napi::Value compressedTexImage3D(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(compressedTexImage3D);
  return env.Undefined();
}

// function compressedTexSubImage1D(target:GLenum ,level:GLint,xoffset:GLint, width:GLsizei , format:GLenum , imageSize:GLsizei , data:[]): void;
Napi::Value compressedTexSubImage1D(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(compressedTexSubImage1D);
  return env.Undefined();
}

// function compressedTexSubImage2D(target:GLenum ,level:GLint,xoffset:GLint,yoffset:GLint, width:GLsizei , height:GLsizei , format:GLenum , imageSize:GLsizei , data:[]): void;
Napi::Value compressedTexSubImage2D(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(compressedTexSubImage2D);
  return env.Undefined();
}

// function compressedTexSubImage3D(target:GLenum ,level:GLint,xoffset:GLint,yoffset:GLint,zoffset:GLint, width:GLsizei , height:GLsizei , depth:GLsizei , format:GLenum , imageSize:GLsizei , data:[]): void;
Napi::Value compressedTexSubImage3D(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(compressedTexSubImage3D);
  return env.Undefined();
}

// function getCompressedTexImage(target:GLenum ,lod:GLint,img:[]): void;
Napi::Value getCompressedTexImage(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getCompressedTexImage);
  return env.Undefined();
}

// function loadTransposeMatrixd(m:GLdouble[]): void;
Napi::Value loadTransposeMatrixd(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(loadTransposeMatrixd);
  return env.Undefined();
}

// function loadTransposeMatrixf(m:GLfloat[]): void;
Napi::Value loadTransposeMatrixf(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(loadTransposeMatrixf);
  return env.Undefined();
}

// function multTransposeMatrixd(m:GLdouble[]): void;
Napi::Value multTransposeMatrixd(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(multTransposeMatrixd);
  return env.Undefined();
}

// function multTransposeMatrixf(m:GLfloat[]): void;
Napi::Value multTransposeMatrixf(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(multTransposeMatrixf);
  return env.Undefined();
}

// function multiTexCoord1d(target:GLenum , s:GLdouble ): void;
Napi::Value multiTexCoord1d(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(multiTexCoord1d);
  return env.Undefined();
}

// function multiTexCoord1dv(target:GLenum ,v:GLdouble[]): void;
Napi::Value multiTexCoord1dv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(multiTexCoord1dv);
  return env.Undefined();
}

// function multiTexCoord1f(target:GLenum , s:GLfloat ): void;
Napi::Value multiTexCoord1f(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(multiTexCoord1f);
  return env.Undefined();
}

// function multiTexCoord1fv(target:GLenum ,v:GLfloat[]): void;
Napi::Value multiTexCoord1fv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(multiTexCoord1fv);
  return env.Undefined();
}

// function multiTexCoord1i(target:GLenum ,s:GLint): void;
Napi::Value multiTexCoord1i(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(multiTexCoord1i);
  return env.Undefined();
}

// function multiTexCoord1iv(target:GLenum ,v:GLint[]): void;
Napi::Value multiTexCoord1iv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(multiTexCoord1iv);
  return env.Undefined();
}

// function multiTexCoord1s(target:GLenum , s:GLshort ): void;
Napi::Value multiTexCoord1s(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(multiTexCoord1s);
  return env.Undefined();
}

// function multiTexCoord1sv(target:GLenum ,v:GLshort[]): void;
Napi::Value multiTexCoord1sv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(multiTexCoord1sv);
  return env.Undefined();
}

// function multiTexCoord2d(target:GLenum , s:GLdouble , t:GLdouble ): void;
Napi::Value multiTexCoord2d(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(multiTexCoord2d);
  return env.Undefined();
}

// function multiTexCoord2dv(target:GLenum ,v:GLdouble[]): void;
Napi::Value multiTexCoord2dv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(multiTexCoord2dv);
  return env.Undefined();
}

// function multiTexCoord2f(target:GLenum , s:GLfloat , t:GLfloat ): void;
Napi::Value multiTexCoord2f(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(multiTexCoord2f);
  return env.Undefined();
}

// function multiTexCoord2fv(target:GLenum ,v:GLfloat[]): void;
Napi::Value multiTexCoord2fv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(multiTexCoord2fv);
  return env.Undefined();
}

// function multiTexCoord2i(target:GLenum ,s:GLint,t:GLint): void;
Napi::Value multiTexCoord2i(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(multiTexCoord2i);
  return env.Undefined();
}

// function multiTexCoord2iv(target:GLenum ,v:GLint[]): void;
Napi::Value multiTexCoord2iv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(multiTexCoord2iv);
  return env.Undefined();
}

// function multiTexCoord2s(target:GLenum , s:GLshort , t:GLshort ): void;
Napi::Value multiTexCoord2s(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(multiTexCoord2s);
  return env.Undefined();
}

// function multiTexCoord2sv(target:GLenum ,v:GLshort[]): void;
Napi::Value multiTexCoord2sv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(multiTexCoord2sv);
  return env.Undefined();
}

// function multiTexCoord3d(target:GLenum , s:GLdouble , t:GLdouble , r:GLdouble ): void;
Napi::Value multiTexCoord3d(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(multiTexCoord3d);
  return env.Undefined();
}

// function multiTexCoord3dv(target:GLenum ,v:GLdouble[]): void;
Napi::Value multiTexCoord3dv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(multiTexCoord3dv);
  return env.Undefined();
}

// function multiTexCoord3f(target:GLenum , s:GLfloat , t:GLfloat , r:GLfloat ): void;
Napi::Value multiTexCoord3f(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(multiTexCoord3f);
  return env.Undefined();
}

// function multiTexCoord3fv(target:GLenum ,v:GLfloat[]): void;
Napi::Value multiTexCoord3fv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(multiTexCoord3fv);
  return env.Undefined();
}

// function multiTexCoord3i(target:GLenum ,s:GLint,t:GLint,r:GLint): void;
Napi::Value multiTexCoord3i(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(multiTexCoord3i);
  return env.Undefined();
}

// function multiTexCoord3iv(target:GLenum ,v:GLint[]): void;
Napi::Value multiTexCoord3iv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(multiTexCoord3iv);
  return env.Undefined();
}

// function multiTexCoord3s(target:GLenum , s:GLshort , t:GLshort , r:GLshort ): void;
Napi::Value multiTexCoord3s(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(multiTexCoord3s);
  return env.Undefined();
}

// function multiTexCoord3sv(target:GLenum ,v:GLshort[]): void;
Napi::Value multiTexCoord3sv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(multiTexCoord3sv);
  return env.Undefined();
}

// function multiTexCoord4d(target:GLenum , s:GLdouble , t:GLdouble , r:GLdouble , q:GLdouble ): void;
Napi::Value multiTexCoord4d(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(multiTexCoord4d);
  return env.Undefined();
}

// function multiTexCoord4dv(target:GLenum ,v:GLdouble[]): void;
Napi::Value multiTexCoord4dv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(multiTexCoord4dv);
  return env.Undefined();
}

// function multiTexCoord4f(target:GLenum , s:GLfloat , t:GLfloat , r:GLfloat , q:GLfloat ): void;
Napi::Value multiTexCoord4f(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(multiTexCoord4f);
  return env.Undefined();
}

// function multiTexCoord4fv(target:GLenum ,v:GLfloat[]): void;
Napi::Value multiTexCoord4fv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(multiTexCoord4fv);
  return env.Undefined();
}

// function multiTexCoord4i(target:GLenum ,s:GLint,t:GLint,r:GLint,q:GLint): void;
Napi::Value multiTexCoord4i(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(multiTexCoord4i);
  return env.Undefined();
}

// function multiTexCoord4iv(target:GLenum ,v:GLint[]): void;
Napi::Value multiTexCoord4iv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(multiTexCoord4iv);
  return env.Undefined();
}

// function multiTexCoord4s(target:GLenum , s:GLshort , t:GLshort , r:GLshort , q:GLshort ): void;
Napi::Value multiTexCoord4s(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(multiTexCoord4s);
  return env.Undefined();
}

// function multiTexCoord4sv(target:GLenum ,v:GLshort[]): void;
Napi::Value multiTexCoord4sv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(multiTexCoord4sv);
  return env.Undefined();
}

// function sampleCoverage(value:GLclampf, invert:GLboolean ): void;
Napi::Value sampleCoverage(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(sampleCoverage);
  return env.Undefined();
}


    // GL_VERSION_1_4
// function blendColor(red:GLclampf, green:GLclampf, blue:GLclampf, alpha:GLclampf): void;
Napi::Value blendColor(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(blendColor);
  return env.Undefined();
}

// function blendEquation(mode:GLenum ): void;
Napi::Value blendEquation(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(blendEquation);
  return env.Undefined();
}

// function blendFuncSeparate(sfactorRGB:GLenum , dfactorRGB:GLenum , sfactorAlpha:GLenum , dfactorAlpha:GLenum ): void;
Napi::Value blendFuncSeparate(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(blendFuncSeparate);
  return env.Undefined();
}

// function fogCoordPointer(type:GLenum , stride:GLsizei , pointer:[]): void;
Napi::Value fogCoordPointer(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(fogCoordPointer);
  return env.Undefined();
}

// function fogCoordd(coord:GLdouble ): void;
Napi::Value fogCoordd(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(fogCoordd);
  return env.Undefined();
}

// function fogCoorddv(coord:GLdouble[]): void;
Napi::Value fogCoorddv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(fogCoorddv);
  return env.Undefined();
}

// function fogCoordf(coord:GLfloat ): void;
Napi::Value fogCoordf(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(fogCoordf);
  return env.Undefined();
}

// function fogCoordfv(coord:GLfloat[]): void;
Napi::Value fogCoordfv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(fogCoordfv);
  return env.Undefined();
}

// function multiDrawArrays(mode:GLenum ,first:GLint[], count:GLsizei[], drawcount:GLsizei ): void;
Napi::Value multiDrawArrays(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(multiDrawArrays);
  return env.Undefined();
}

// function multiDrawElements(mode:GLenum , count:GLsizei[], type:GLenum , indices: [], drawcount:GLsizei ): void;
Napi::Value multiDrawElements(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(multiDrawElements);
  return env.Undefined();
}

// function pointParameterf(pname:GLenum , param:GLfloat ): void;
Napi::Value pointParameterf(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(pointParameterf);
  return env.Undefined();
}

// function pointParameterfv(pname:GLenum ,params:GLfloat[]): void;
Napi::Value pointParameterfv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(pointParameterfv);
  return env.Undefined();
}

// function pointParameteri(pname:GLenum ,param:GLint): void;
Napi::Value pointParameteri(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(pointParameteri);
  return env.Undefined();
}

// function pointParameteriv(pname:GLenum ,params:GLint[]): void;
Napi::Value pointParameteriv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(pointParameteriv);
  return env.Undefined();
}

// function secondaryColor3b(red:GLbyte, green:GLbyte, blue:GLbyte): void;
Napi::Value secondaryColor3b(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(secondaryColor3b);
  return env.Undefined();
}

// function secondaryColor3bv(v:GLbyte[]): void;
Napi::Value secondaryColor3bv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(secondaryColor3bv);
  return env.Undefined();
}

// function secondaryColor3d(red:GLdouble , green:GLdouble , blue:GLdouble ): void;
Napi::Value secondaryColor3d(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(secondaryColor3d);
  return env.Undefined();
}

// function secondaryColor3dv(v:GLdouble[]): void;
Napi::Value secondaryColor3dv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(secondaryColor3dv);
  return env.Undefined();
}

// function secondaryColor3f(red:GLfloat , green:GLfloat , blue:GLfloat ): void;
Napi::Value secondaryColor3f(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(secondaryColor3f);
  return env.Undefined();
}

// function secondaryColor3fv(v:GLfloat[]): void;
Napi::Value secondaryColor3fv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(secondaryColor3fv);
  return env.Undefined();
}

// function secondaryColor3i(red:GLint ,green:GLint,blue:GLint): void;
Napi::Value secondaryColor3i(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(secondaryColor3i);
  return env.Undefined();
}

// function secondaryColor3iv(v:GLint[]): void;
Napi::Value secondaryColor3iv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(secondaryColor3iv);
  return env.Undefined();
}

// function secondaryColor3s(red:GLshort , green:GLshort , blue:GLshort ): void;
Napi::Value secondaryColor3s(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(secondaryColor3s);
  return env.Undefined();
}

// function secondaryColor3sv(v:GLshort[]): void;
Napi::Value secondaryColor3sv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(secondaryColor3sv);
  return env.Undefined();
}

// function secondaryColor3ub(red:GLubyte , green:GLubyte , blue:GLubyte ): void;
Napi::Value secondaryColor3ub(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(secondaryColor3ub);
  return env.Undefined();
}

// function secondaryColor3ubv(v: GLubyte[]): void;
Napi::Value secondaryColor3ubv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(secondaryColor3ubv);
  return env.Undefined();
}

// function secondaryColor3ui(red:GLuint , green:GLuint , blue:GLuint ): void;
Napi::Value secondaryColor3ui(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(secondaryColor3ui);
  return env.Undefined();
}

// function secondaryColor3uiv(v:GLuint[]): void;
Napi::Value secondaryColor3uiv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(secondaryColor3uiv);
  return env.Undefined();
}

// function secondaryColor3us(red: GLushort, green: GLushort, blue: GLushort): void;
Napi::Value secondaryColor3us(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(secondaryColor3us);
  return env.Undefined();
}

// function secondaryColor3usv(v:GLushort[]): void;
Napi::Value secondaryColor3usv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(secondaryColor3usv);
  return env.Undefined();
}

// function secondaryColorPointer(size:GLint , type:GLenum , stride:GLsizei , pointer:[]): void;
Napi::Value secondaryColorPointer(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(secondaryColorPointer);
  return env.Undefined();
}

// function windowPos2d(x:GLdouble , y:GLdouble ): void;
Napi::Value windowPos2d(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(windowPos2d);
  return env.Undefined();
}

// function windowPos2dv(p:GLdouble[]): void;
Napi::Value windowPos2dv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(windowPos2dv);
  return env.Undefined();
}

// function windowPos2f(x:GLfloat , y:GLfloat ): void;
Napi::Value windowPos2f(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(windowPos2f);
  return env.Undefined();
}

// function windowPos2fv(p:GLfloat[]): void;
Napi::Value windowPos2fv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(windowPos2fv);
  return env.Undefined();
}

// function windowPos2i(x:GLint ,y:GLint): void;
Napi::Value windowPos2i(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(windowPos2i);
  return env.Undefined();
}

// function windowPos2iv(p:GLint[]): void;
Napi::Value windowPos2iv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(windowPos2iv);
  return env.Undefined();
}

// function windowPos2s(x:GLshort , y:GLshort ): void;
Napi::Value windowPos2s(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(windowPos2s);
  return env.Undefined();
}

// function windowPos2sv(p:GLshort[]): void;
Napi::Value windowPos2sv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(windowPos2sv);
  return env.Undefined();
}

// function windowPos3d(x:GLdouble , y:GLdouble , z:GLdouble ): void;
Napi::Value windowPos3d(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(windowPos3d);
  return env.Undefined();
}

// function windowPos3dv(p:GLdouble[]): void;
Napi::Value windowPos3dv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(windowPos3dv);
  return env.Undefined();
}

// function windowPos3f(x:GLfloat , y:GLfloat , z:GLfloat ): void;
Napi::Value windowPos3f(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(windowPos3f);
  return env.Undefined();
}

// function windowPos3fv(p:GLfloat[]): void;
Napi::Value windowPos3fv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(windowPos3fv);
  return env.Undefined();
}

// function windowPos3i(x:GLint ,y:GLint,z:GLint): void;
Napi::Value windowPos3i(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(windowPos3i);
  return env.Undefined();
}

// function windowPos3iv(p:GLint[]): void;
Napi::Value windowPos3iv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(windowPos3iv);
  return env.Undefined();
}

// function windowPos3s(x:GLshort , y:GLshort , z:GLshort ): void;
Napi::Value windowPos3s(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(windowPos3s);
  return env.Undefined();
}

// function windowPos3sv(p:GLshort[]): void;
Napi::Value windowPos3sv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(windowPos3sv);
  return env.Undefined();
}


    // GL_VERSION_1_5
// function beginQuery(target:GLenum , id:GLuint ): void;
Napi::Value beginQuery(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(beginQuery);
  return env.Undefined();
}

// function bindBuffer(target:GLenum , buffer:GLuint ): void;
Napi::Value bindBuffer(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_ARGS(2);
  JS_GLENUM_ARG(0, target);
  JS_GLUINT_ARG(1, buffer);
  glBindBuffer(target, buffer);
  return env.Undefined();
}

// function bufferData(target:GLenum , size:GLsizeiptr , data:[], usage:GLenum ): void;
Napi::Value bufferData(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();

  JS_ARGS(4);
  JS_GLENUM_ARG(0, target);
  JS_GLSIZEIPTR_ARG(1, size);
	GLfloat* data = info[2].As<Napi::Float32Array>().Data();
  JS_GLENUM_ARG(3, usage);

  glBufferData(target, size, data, usage);

  return env.Undefined();
}

// function bufferSubData(target:GLenum , offset:GLintptr , size:GLsizeiptr , data:[]): void;
Napi::Value bufferSubData(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(bufferSubData);
  return env.Undefined();
}

// function deleteBuffers(n:GLsizei , buffers: GLuint[]): void;
Napi::Value deleteBuffers(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(deleteBuffers);
  return env.Undefined();
}

// function deleteQueries(n:GLsizei , ids: GLuint[]): void;
Napi::Value deleteQueries(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(deleteQueries);
  return env.Undefined();
}

// function endQuery(target:GLenum ): void;
Napi::Value endQuery(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(endQuery);
  return env.Undefined();
}

// function genBuffers(n:GLsizei): void;
Napi::Value genBuffers(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();

  JS_ARGS(1);
  JS_ARG_TYPE(0, Number);
  JS_GLSIZEI_ARG(0, id);

  GLuint vertexArrayID;
	glGenBuffers(id, &vertexArrayID);
  
  return Napi::Number::New(env, vertexArrayID);
}

// function genVertexArrays(n:GLsizei): void;
Napi::Value genVertexArrays(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();

  JS_ARGS(1);
  JS_ARG_TYPE(0, Number);
  JS_GLUINT_ARG(0, id);

  GLuint vertexArrayID;
	glGenVertexArrays(id, &vertexArrayID);
  
  return Napi::Number::New(env, vertexArrayID);
}

// function bindVertexArray(n:GLsizei): void;
Napi::Value bindVertexArray(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();

  JS_ARGS(1);
  JS_ARG_TYPE(0, Number);
  JS_GLUINT_ARG(0, id);
	glBindVertexArray(id);
  
  return env.Undefined();
}


// function genQueries(n:GLsizei , ids: GLuint[]): void;
Napi::Value genQueries(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(genQueries);
  return env.Undefined();
}

// function getBufferParameteriv(target:GLenum , pname:GLenum , params: GLint[]): void;
Napi::Value getBufferParameteriv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getBufferParameteriv);
  return env.Undefined();
}

// function getBufferPointerv(target:GLenum , pname:GLenum , params:void[]): void;
Napi::Value getBufferPointerv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getBufferPointerv);
  return env.Undefined();
}

// function getBufferSubData(target:GLenum , offset:GLintptr , size:GLsizeiptr , data:[]): void;
Napi::Value getBufferSubData(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getBufferSubData);
  return env.Undefined();
}

// function getQueryObjectiv(id:GLuint , pname:GLenum , params: GLint[]): void;
Napi::Value getQueryObjectiv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getQueryObjectiv);
  return env.Undefined();
}

// function getQueryObjectuiv(id:GLuint , pname:GLenum , params: GLuint[]): void;
Napi::Value getQueryObjectuiv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getQueryObjectuiv);
  return env.Undefined();
}

// function getQueryiv(target:GLenum , pname:GLenum , params: GLint[]): void;
Napi::Value getQueryiv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getQueryiv);
  return env.Undefined();
}

// function isBuffer(buffer:GLuint ): GLboolean;
Napi::Value isBuffer(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(isBuffer);
  return env.Undefined();
}

// function isQuery(id:GLuint ): GLboolean;
Napi::Value isQuery(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(isQuery);
  return env.Undefined();
}

// function mapBuffer(target:GLenum , access:GLenum ): [];
Napi::Value mapBuffer(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(mapBuffer);
  return env.Undefined();
}

// function unmapBuffer(target:GLenum ): GLboolean;
Napi::Value unmapBuffer(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(unmapBuffer);
  return env.Undefined();
}


    // GL_VERSION_2_0
// function attachShader(program:GLuint , shader:GLuint ): void;
Napi::Value attachShader(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
	JS_ARGS(2);
	JS_ARG_TYPE(0, Number);
  JS_ARG_TYPE(1, Number);
	JS_GLUINT_ARG(0, program);
  JS_GLUINT_ARG(1, shader);
	glAttachShader(program, shader);
  return env.Undefined();
}

// function bindAttribLocation(program:GLuint , index:GLuint , name: string): void;
Napi::Value bindAttribLocation(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(bindAttribLocation);
  return env.Undefined();
}

// function blendEquationSeparate(modeRGB:GLenum , modeAlpha:GLenum ): void;
Napi::Value blendEquationSeparate(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(blendEquationSeparate);
  return env.Undefined();
}

// function compileShader(shader:GLuint ): void;
Napi::Value compileShader(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
	JS_ARGS(1);
	JS_ARG_TYPE(0, Number);
	JS_GLUINT_ARG(0, shader);
  glCompileShader(shader);
  return env.Undefined();
}

// function createProgram(): GLuint;
Napi::Value createProgram(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  return Napi::Number::New(env, glCreateProgram());
}

// function createShader(type:GLenum ): GLuint;
Napi::Value createShader(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
	JS_ARGS(1);
	JS_ARG_TYPE(0, Number);
	JS_GLENUM_ARG(0, type);
  return Napi::Number::New(env, glCreateShader(type));
}

// function deleteProgram(program:GLuint ): void;
Napi::Value deleteProgram(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(deleteProgram);
  return env.Undefined();
}

// function deleteShader(shader:GLuint ): void;
Napi::Value deleteShader(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(deleteShader);
  return env.Undefined();
}

// function detachShader(program:GLuint , shader:GLuint ): void;
Napi::Value detachShader(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(detachShader);
  return env.Undefined();
}

// function disableVertexAttribArray(index:GLuint ): void;
Napi::Value disableVertexAttribArray(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();

  JS_ARGS(1);
  JS_GLUINT_ARG(0, index);

  glDisableVertexAttribArray(index);
  return env.Undefined();
}

// function drawBuffers(n:GLsizei , bufs:GLenum[]): void;
Napi::Value drawBuffers(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(drawBuffers);
  return env.Undefined();
}

// function enableVertexAttribArray(index:GLuint ): void;
Napi::Value enableVertexAttribArray(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();

  JS_ARGS(1);
  JS_ARG_TYPE(0, Number);
  JS_GLUINT_ARG(0, index);

  glEnableVertexAttribArray(index);

  return env.Undefined();
}

// function getActiveAttrib(program:GLuint , index:GLuint , maxLength:GLsizei , length: GLsizei[], size: GLint[], type: GLenum[], name: string): void;
Napi::Value getActiveAttrib(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getActiveAttrib);
  return env.Undefined();
}

// function getActiveUniform(program:GLuint , index:GLuint , maxLength:GLsizei , length: GLsizei[], size: GLint[], type: GLenum[], name: string): void;
Napi::Value getActiveUniform(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getActiveUniform);
  return env.Undefined();
}

// function getAttachedShaders(program:GLuint , maxCount:GLsizei , count: GLsizei[], shaders: GLuint[]): void;
Napi::Value getAttachedShaders(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getAttachedShaders);
  return env.Undefined();
}

// function getAttribLocation(program:GLuint , name: string): GLint;
Napi::Value getAttribLocation(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getAttribLocation);
  return env.Undefined();
}

// function getProgramInfoLog(program:GLuint , bufSize:GLsizei , length: GLsizei[], infoLog: string): void;
Napi::Value getProgramInfoLog(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getProgramInfoLog);
  return env.Undefined();
}

// function getProgramiv(program:GLuint , pname:GLenum , param): GLint[];
Napi::Value getProgramiv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getProgramiv);
  return env.Undefined();
}

// function getShaderInfoLog(shader:GLuint , bufSize:GLsizei , length: GLsizei[], infoLog: string): void;
// function getShaderInfoLog(shader:GLuint , bufSize:GLsizei): [GLsizei, string];
Napi::Value getShaderInfoLog(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
	JS_ARGS(2);

	JS_ARG_TYPE(0, Number);
	JS_ARG_TYPE(1, Number);
	JS_GLUINT_ARG(0, shader);
  JS_GLSIZEI_ARG(1, bufSize);

  GLsizei length = 0;
  GLchar* infoLog;

  infoLog = (GLchar *) malloc(bufSize);
  glGetShaderInfoLog(shader, bufSize, &length, infoLog);
  Napi::Array paramArray = Napi::Array::New(env);
  paramArray.Set((uint32_t) 0, Napi::Number::New(env, length));
  paramArray.Set((uint32_t) 1, Napi::String::New(env, infoLog));
  free(infoLog);

  return paramArray;
}

// function getShaderSource(obj:GLuint , maxLength:GLsizei , length: GLsizei[], source: string): void;
// function getShaderSource(obj:GLuint , maxLength:GLsizei , length: GLsizei[], source: string): void;
Napi::Value getShaderSource(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getShaderSource);
  return env.Undefined();
}

// function getShaderiv(shader:GLuint , pname:GLenum , param): GLint[];
Napi::Value getShaderiv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
	JS_ARGS(2);
	JS_ARG_TYPE(0, Number);
	JS_ARG_TYPE(1, Number);
	JS_GLUINT_ARG(0, shader);
  JS_GLENUM_ARG(1, pname);
  GLint param[5];
  glGetShaderiv(shader, pname, param);
  Napi::Array paramArray = Napi::Array::New(env);
  for(int i = 0; i < sizeof(param) / sizeof(*param); i++) {
    paramArray.Set(i, Napi::Number::New(env, param[i]));
  }
  return paramArray;
}

// function getUniformLocation(program:GLuint , name: string): GLint;
Napi::Value getUniformLocation(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
	JS_ARGS(2);
	JS_ARG_TYPE(0, Number);
	JS_ARG_TYPE(1, String);
	JS_GLFLOAT_ARG(0, program);
	JS_STR_ARG(1, name);
  return Napi::Number::New(info.Env(), glGetUniformLocation(program, name.c_str()));
}

// function getUniformfv(program:GLuint ,location:GLint, params:GLfloat[]): void;
Napi::Value getUniformfv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getUniformfv);
  return env.Undefined();
}

// function getUniformiv(program:GLuint ,location:GLint, params: GLint[]): void;
Napi::Value getUniformiv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getUniformiv);
  return env.Undefined();
}

// function getVertexAttribPointerv(index:GLuint , pname:GLenum , pointer:[]): void;
Napi::Value getVertexAttribPointerv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getVertexAttribPointerv);
  return env.Undefined();
}

// function getVertexAttribdv(index:GLuint , pname:GLenum , params:GLdouble[]): void;
Napi::Value getVertexAttribdv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getVertexAttribdv);
  return env.Undefined();
}

// function getVertexAttribfv(index:GLuint , pname:GLenum , params:GLfloat[]): void;
Napi::Value getVertexAttribfv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getVertexAttribfv);
  return env.Undefined();
}

// function getVertexAttribiv(index:GLuint , pname:GLenum , params: GLint[]): void;
Napi::Value getVertexAttribiv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getVertexAttribiv);
  return env.Undefined();
}

// function isProgram(program:GLuint ): GLboolean;
Napi::Value isProgram(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(isProgram);
  return env.Undefined();
}

// function isShader(shader:GLuint ): GLboolean;
Napi::Value isShader(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(isShader);
  return env.Undefined();
}

// function linkProgram(program:GLuint ): void;
Napi::Value linkProgram(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
	JS_ARGS(1);
	JS_ARG_TYPE(0, Number);
	JS_GLUINT_ARG(0, program);
	glLinkProgram(program);
  return env.Undefined();
}

// function shaderSource(shader:GLuint , src: string): void;
// function shaderSource(shader:GLuint , count:GLsizei , src: string, length:GLint[]): void;
Napi::Value shaderSource(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
	JS_ARGS(2);
	JS_ARG_TYPE(0, Number);
  JS_ARG_TYPE(1, String);
	JS_GLUINT_ARG(0, shader);
  JS_STR_ARG(1, src);
  GLchar const* srcs[] = { src.c_str() };
  GLint lengths[]      = { (GLint)src.size() };
	glShaderSource(shader, 1, srcs, lengths);
  return env.Undefined();
}

// function stencilFuncSeparate(frontfunc:GLenum , backfunc:GLenum ,ref:GLint, mask:GLuint ): void;
Napi::Value stencilFuncSeparate(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(stencilFuncSeparate);
  return env.Undefined();
}

// function stencilMaskSeparate(face:GLenum , mask:GLuint ): void;
Napi::Value stencilMaskSeparate(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(stencilMaskSeparate);
  return env.Undefined();
}

// function stencilOpSeparate(face:GLenum , sfail:GLenum , dpfail:GLenum , dppass:GLenum ): void;
Napi::Value stencilOpSeparate(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(stencilOpSeparate);
  return env.Undefined();
}

// function uniform1f(location:GLint , v0:GLfloat ): void;
Napi::Value uniform1f(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
	JS_ARGS(2);
	JS_ARG_TYPE(0, Number);
	JS_ARG_TYPE(1, Number);
	JS_GLINT_ARG(0, location);
	JS_GLFLOAT_ARG(1, v0);
	glUniform1f(location, v0);
  return env.Undefined();
}

// function uniform1fv(location:GLint , count:GLsizei , value:GLfloat[]): void;
Napi::Value uniform1fv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(uniform1fv);
  return env.Undefined();
}

// function uniform1i(location:GLint ,v0:GLint): void;
Napi::Value uniform1i(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(uniform1i);
  return env.Undefined();
}

// function uniform1iv(location:GLint , count:GLsizei , value:GLint[]): void;
Napi::Value uniform1iv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(uniform1iv);
  return env.Undefined();
}

// function uniform2f(location:GLint , v0:GLfloat , v1:GLfloat ): void;
Napi::Value uniform2f(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(uniform2f);
  return env.Undefined();
}

// function uniform2fv(location:GLint , count:GLsizei , value:GLfloat[]): void;
Napi::Value uniform2fv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(uniform2fv);
  return env.Undefined();
}

// function uniform2i(location:GLint ,v0:GLint,v1:GLint): void;
Napi::Value uniform2i(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(uniform2i);
  return env.Undefined();
}

// function uniform2iv(location:GLint , count:GLsizei , value:GLint[]): void;
Napi::Value uniform2iv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(uniform2iv);
  return env.Undefined();
}

// function uniform3f(location:GLint , v0:GLfloat , v1:GLfloat , v2:GLfloat ): void;
Napi::Value uniform3f(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(uniform3f);
  return env.Undefined();
}

// function uniform3fv(location:GLint , count:GLsizei , value:GLfloat[]): void;
Napi::Value uniform3fv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(uniform3fv);
  return env.Undefined();
}

// function uniform3i(location:GLint ,v0:GLint,v1:GLint,v2:GLint): void;
Napi::Value uniform3i(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(uniform3i);
  return env.Undefined();
}

// function uniform3iv(location:GLint , count:GLsizei , value:GLint[]): void;
Napi::Value uniform3iv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(uniform3iv);
  return env.Undefined();
}

// function uniform4f(location:GLint , v0:GLfloat , v1:GLfloat , v2:GLfloat , v3:GLfloat ): void;
Napi::Value uniform4f(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(uniform4f);
  return env.Undefined();
}

// function uniform4fv(location:GLint , count:GLsizei , value:GLfloat[]): void;
Napi::Value uniform4fv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(uniform4fv);
  return env.Undefined();
}

// function uniform4i(location:GLint ,v0:GLint,v1:GLint,v2:GLint,v3:GLint): void;
Napi::Value uniform4i(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(uniform4i);
  return env.Undefined();
}

// function uniform4iv(location:GLint , count:GLsizei , value:GLint[]): void;
Napi::Value uniform4iv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(uniform4iv);
  return env.Undefined();
}

// function uniformMatrix2fv(location:GLint , count:GLsizei , transpose:GLboolean , value:GLfloat[]): void;
Napi::Value uniformMatrix2fv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(uniformMatrix2fv);
  return env.Undefined();
}

// function uniformMatrix3fv(location:GLint , count:GLsizei , transpose:GLboolean , value:GLfloat[]): void;
Napi::Value uniformMatrix3fv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(uniformMatrix3fv);
  return env.Undefined();
}

// function uniformMatrix4fv(location:GLint , count:GLsizei , transpose:GLboolean , value:GLfloat[]): void;
Napi::Value uniformMatrix4fv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_ARGS(4);
	JS_ARG_TYPE(0, Number);
	JS_ARG_TYPE(1, Number);
	JS_ARG_TYPE(2, Number);
	JS_GLINT_ARG(0, location);
	JS_GLINT_ARG(1, count);
	JS_GLINT_ARG(2, transpose);
	GLfloat* params = info[3].As<Napi::External<float>>().Data();

  glUniformMatrix4fv(location, count, transpose, params);
  return env.Undefined();
}

// function useProgram(program:GLuint ): void;
Napi::Value useProgram(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
	JS_ARGS(1);
	JS_ARG_TYPE(0, Number);
	JS_GLUINT_ARG(0, program);
	glUseProgram(program);
  return env.Undefined();
}

// function validateProgram(program:GLuint ): void;
Napi::Value validateProgram(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(validateProgram);
  return env.Undefined();
}

// function vertexAttrib1d(index:GLuint , x:GLdouble ): void;
Napi::Value vertexAttrib1d(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttrib1d);
  return env.Undefined();
}

// function vertexAttrib1dv(index:GLuint , v:GLdouble[]): void;
Napi::Value vertexAttrib1dv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttrib1dv);
  return env.Undefined();
}

// function vertexAttrib1f(index:GLuint , x:GLfloat ): void;
Napi::Value vertexAttrib1f(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttrib1f);
  return env.Undefined();
}

// function vertexAttrib1fv(index:GLuint , v:GLfloat[]): void;
Napi::Value vertexAttrib1fv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttrib1fv);
  return env.Undefined();
}

// function vertexAttrib1s(index:GLuint , x:GLshort ): void;
Napi::Value vertexAttrib1s(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttrib1s);
  return env.Undefined();
}

// function vertexAttrib1sv(index:GLuint , v:GLshort[]): void;
Napi::Value vertexAttrib1sv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttrib1sv);
  return env.Undefined();
}

// function vertexAttrib2d(index:GLuint , x:GLdouble , y:GLdouble ): void;
Napi::Value vertexAttrib2d(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttrib2d);
  return env.Undefined();
}

// function vertexAttrib2dv(index:GLuint , v:GLdouble[]): void;
Napi::Value vertexAttrib2dv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttrib2dv);
  return env.Undefined();
}

// function vertexAttrib2f(index:GLuint , x:GLfloat , y:GLfloat ): void;
Napi::Value vertexAttrib2f(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttrib2f);
  return env.Undefined();
}

// function vertexAttrib2fv(index:GLuint , v:GLfloat[]): void;
Napi::Value vertexAttrib2fv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttrib2fv);
  return env.Undefined();
}

// function vertexAttrib2s(index:GLuint , x:GLshort , y:GLshort ): void;
Napi::Value vertexAttrib2s(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttrib2s);
  return env.Undefined();
}

// function vertexAttrib2sv(index:GLuint , v:GLshort[]): void;
Napi::Value vertexAttrib2sv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttrib2sv);
  return env.Undefined();
}

// function vertexAttrib3d(index:GLuint , x:GLdouble , y:GLdouble , z:GLdouble ): void;
Napi::Value vertexAttrib3d(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttrib3d);
  return env.Undefined();
}

// function vertexAttrib3dv(index:GLuint , v:GLdouble[]): void;
Napi::Value vertexAttrib3dv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttrib3dv);
  return env.Undefined();
}

// function vertexAttrib3f(index:GLuint , x:GLfloat , y:GLfloat , z:GLfloat ): void;
Napi::Value vertexAttrib3f(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttrib3f);
  return env.Undefined();
}

// function vertexAttrib3fv(index:GLuint , v:GLfloat[]): void;
Napi::Value vertexAttrib3fv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttrib3fv);
  return env.Undefined();
}

// function vertexAttrib3s(index:GLuint , x:GLshort , y:GLshort , z:GLshort ): void;
Napi::Value vertexAttrib3s(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttrib3s);
  return env.Undefined();
}

// function vertexAttrib3sv(index:GLuint , v:GLshort[]): void;
Napi::Value vertexAttrib3sv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttrib3sv);
  return env.Undefined();
}

// function vertexAttrib4Nbv(index:GLuint , v:GLbyte[]): void;
Napi::Value vertexAttrib4Nbv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttrib4Nbv);
  return env.Undefined();
}

// function vertexAttrib4Niv(index:GLuint , v:GLint[]): void;
Napi::Value vertexAttrib4Niv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttrib4Niv);
  return env.Undefined();
}

// function vertexAttrib4Nsv(index:GLuint , v:GLshort[]): void;
Napi::Value vertexAttrib4Nsv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttrib4Nsv);
  return env.Undefined();
}

// function vertexAttrib4Nub(index:GLuint , x:GLubyte , y:GLubyte , z:GLubyte , w:GLubyte ): void;
Napi::Value vertexAttrib4Nub(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttrib4Nub);
  return env.Undefined();
}

// function vertexAttrib4Nubv(index:GLuint , v:GLubyte[]): void;
Napi::Value vertexAttrib4Nubv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttrib4Nubv);
  return env.Undefined();
}

// function vertexAttrib4Nuiv(index:GLuint , v: GLuint[]): void;
Napi::Value vertexAttrib4Nuiv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttrib4Nuiv);
  return env.Undefined();
}

// function vertexAttrib4Nusv(index:GLuint , v:GLushort[]): void;
Napi::Value vertexAttrib4Nusv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttrib4Nusv);
  return env.Undefined();
}

// function vertexAttrib4bv(index:GLuint , v:GLbyte[]): void;
Napi::Value vertexAttrib4bv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttrib4bv);
  return env.Undefined();
}

// function vertexAttrib4d(index:GLuint , x:GLdouble , y:GLdouble , z:GLdouble , w:GLdouble ): void;
Napi::Value vertexAttrib4d(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttrib4d);
  return env.Undefined();
}

// function vertexAttrib4dv(index:GLuint , v:GLdouble[]): void;
Napi::Value vertexAttrib4dv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttrib4dv);
  return env.Undefined();
}

// function vertexAttrib4f(index:GLuint , x:GLfloat , y:GLfloat , z:GLfloat , w:GLfloat ): void;
Napi::Value vertexAttrib4f(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttrib4f);
  return env.Undefined();
}

// function vertexAttrib4fv(index:GLuint , v:GLfloat[]): void;
Napi::Value vertexAttrib4fv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttrib4fv);
  return env.Undefined();
}

// function vertexAttrib4iv(index:GLuint , v:GLint[]): void;
Napi::Value vertexAttrib4iv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttrib4iv);
  return env.Undefined();
}

// function vertexAttrib4s(index:GLuint , x:GLshort , y:GLshort , z:GLshort , w:GLshort ): void;
Napi::Value vertexAttrib4s(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttrib4s);
  return env.Undefined();
}

// function vertexAttrib4sv(index:GLuint , v:GLshort[]): void;
Napi::Value vertexAttrib4sv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttrib4sv);
  return env.Undefined();
}

// function vertexAttrib4ubv(index:GLuint , v:GLubyte[]): void;
Napi::Value vertexAttrib4ubv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttrib4ubv);
  return env.Undefined();
}

// function vertexAttrib4uiv(index:GLuint , v: GLuint[]): void;
Napi::Value vertexAttrib4uiv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttrib4uiv);
  return env.Undefined();
}

// function vertexAttrib4usv(index:GLuint , v:GLushort[]): void;
Napi::Value vertexAttrib4usv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttrib4usv);
  return env.Undefined();
}

// function vertexAttribPointer(index:GLuint ,size:GLint, type:GLenum , normalized:GLboolean , stride:GLsizei , pointer:[]): void;
Napi::Value vertexAttribPointer(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();

  JS_ARGS(5);

  JS_GLUINT_ARG(0, index);
  JS_GLINT_ARG(1, size);
  JS_GLENUM_ARG(2, type);
  JS_GLINT_ARG(3, normalized);
  JS_GLSIZEI_ARG(4, stride);

  glVertexAttribPointer(index, size, type, normalized, stride, (void*)0);

  return env.Undefined();
}


    // GL_VERSION_2_1
// function uniformMatrix2x3fv(location:GLint , count:GLsizei , transpose:GLboolean ,value:GLfloat[]): void;
Napi::Value uniformMatrix2x3fv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(uniformMatrix2x3fv);
  return env.Undefined();
}

// function uniformMatrix2x4fv(location:GLint , count:GLsizei , transpose:GLboolean ,value:GLfloat[]): void;
Napi::Value uniformMatrix2x4fv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(uniformMatrix2x4fv);
  return env.Undefined();
}

// function uniformMatrix3x2fv(location:GLint , count:GLsizei , transpose:GLboolean ,value:GLfloat[]): void;
Napi::Value uniformMatrix3x2fv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(uniformMatrix3x2fv);
  return env.Undefined();
}

// function uniformMatrix3x4fv(location:GLint , count:GLsizei , transpose:GLboolean ,value:GLfloat[]): void;
Napi::Value uniformMatrix3x4fv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(uniformMatrix3x4fv);
  return env.Undefined();
}

// function uniformMatrix4x2fv(location:GLint , count:GLsizei , transpose:GLboolean ,value:GLfloat[]): void;
Napi::Value uniformMatrix4x2fv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(uniformMatrix4x2fv);
  return env.Undefined();
}

// function uniformMatrix4x3fv(location:GLint , count:GLsizei , transpose:GLboolean ,value:GLfloat[]): void;
Napi::Value uniformMatrix4x3fv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(uniformMatrix4x3fv);
  return env.Undefined();
}


    //GL_VERSION_3_0
// function beginConditionalRender(id:GLuint , mode:GLenum ): void;
Napi::Value beginConditionalRender(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(beginConditionalRender);
  return env.Undefined();
}

// function beginTransformFeedback(primitiveMode:GLenum ): void;
Napi::Value beginTransformFeedback(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(beginTransformFeedback);
  return env.Undefined();
}

// function bindFragDataLocation(program:GLuint , colorNumber:GLuint , name: string): void;
Napi::Value bindFragDataLocation(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(bindFragDataLocation);
  return env.Undefined();
}

// function clampColor(target:GLenum , clamp:GLenum ): void;
Napi::Value clampColor(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(clampColor);
  return env.Undefined();
}

// function clearBufferfi(buffer:GLenum ,drawBuffer:GLint, depth:GLfloat ,stencil:GLint): void;
Napi::Value clearBufferfi(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(clearBufferfi);
  return env.Undefined();
}

// function clearBufferfv(buffer:GLenum ,drawBuffer:GLint, value:GLfloat[]): void;
Napi::Value clearBufferfv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(clearBufferfv);
  return env.Undefined();
}

// function clearBufferiv(buffer:GLenum ,drawBuffer:GLint, value:GLint[]): void;
Napi::Value clearBufferiv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(clearBufferiv);
  return env.Undefined();
}

// function clearBufferuiv(buffer:GLenum ,drawBuffer:GLint, value: GLuint[]): void;
Napi::Value clearBufferuiv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(clearBufferuiv);
  return env.Undefined();
}

// function colorMaski(buf:GLuint , red:GLboolean , green:GLboolean , blue:GLboolean , alpha:GLboolean ): void;
Napi::Value colorMaski(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(colorMaski);
  return env.Undefined();
}

// function disablei(cap:GLenum , index:GLuint ): void;
Napi::Value disablei(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(disablei);
  return env.Undefined();
}

// function enablei(cap:GLenum , index:GLuint ): void;
Napi::Value enablei(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(enablei);
  return env.Undefined();
}

// function endConditionalRender(): void;
Napi::Value endConditionalRender(const Napi::CallbackInfo& info) {
  glEndConditionalRender();
  return info.Env().Undefined();
}

// function endTransformFeedback(): void;
Napi::Value endTransformFeedback(const Napi::CallbackInfo& info) {
  glEndTransformFeedback();
  return info.Env().Undefined();
}

// function getBooleani_v(pname:GLenum , index:GLuint , data:GLboolean[]): void;
Napi::Value getBooleani_v(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getBooleani_v);
  return env.Undefined();
}

// function getFragDataLocation(program:GLuint , name: string): GLint;
Napi::Value getFragDataLocation(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getFragDataLocation);
  return env.Undefined();
}

// function getStringi(name:GLenum , index:GLuint ): GLubyte[];
Napi::Value getStringi(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getStringi);
  return env.Undefined();
}

// function getTexParameterIiv(target:GLenum , pname:GLenum , params: GLint[]): void;
Napi::Value getTexParameterIiv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getTexParameterIiv);
  return env.Undefined();
}

// function getTexParameterIuiv(target:GLenum , pname:GLenum , params: GLuint[]): void;
Napi::Value getTexParameterIuiv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getTexParameterIuiv);
  return env.Undefined();
}

// function getTransformFeedbackVarying(program:GLuint , index:GLuint , bufSize:GLsizei , length:GLsizei[], size:GLsizei[], type:GLenum[], name: string): void;
Napi::Value getTransformFeedbackVarying(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getTransformFeedbackVarying);
  return env.Undefined();
}

// function getUniformuiv(program:GLuint ,location:GLint, params: GLuint[]): void;
Napi::Value getUniformuiv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getUniformuiv);
  return env.Undefined();
}

// function getVertexAttribIiv(index:GLuint , pname:GLenum , params: GLint[]): void;
Napi::Value getVertexAttribIiv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getVertexAttribIiv);
  return env.Undefined();
}

// function getVertexAttribIuiv(index:GLuint , pname:GLenum , params: GLuint[]): void;
Napi::Value getVertexAttribIuiv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getVertexAttribIuiv);
  return env.Undefined();
}

// function isEnabledi(cap:GLenum , index:GLuint ): void;
Napi::Value isEnabledi(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(isEnabledi);
  return env.Undefined();
}

// function texParameterIiv(target:GLenum , pname:GLenum , params:GLint[]): void;
Napi::Value texParameterIiv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texParameterIiv);
  return env.Undefined();
}

// function texParameterIuiv(target:GLenum , pname:GLenum , params: GLuint[]): void;
Napi::Value texParameterIuiv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texParameterIuiv);
  return env.Undefined();
}

// function transformFeedbackVaryings(program:GLuint , count:GLsizei , varyings:string[], bufferMode:GLenum ): void;
Napi::Value transformFeedbackVaryings(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(transformFeedbackVaryings);
  return env.Undefined();
}

// function uniform1ui(location:GLint , v0:GLuint ): void;
Napi::Value uniform1ui(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(uniform1ui);
  return env.Undefined();
}

// function uniform1uiv(location:GLint , count:GLsizei , value: GLuint[]): void;
Napi::Value uniform1uiv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(uniform1uiv);
  return env.Undefined();
}

// function uniform2ui(location:GLint , v0:GLuint , v1:GLuint ): void;
Napi::Value uniform2ui(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(uniform2ui);
  return env.Undefined();
}

// function uniform2uiv(location:GLint , count:GLsizei , value: GLuint[]): void;
Napi::Value uniform2uiv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(uniform2uiv);
  return env.Undefined();
}

// function uniform3ui(location:GLint , v0:GLuint , v1:GLuint , v2:GLuint ): void;
Napi::Value uniform3ui(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(uniform3ui);
  return env.Undefined();
}

// function uniform3uiv(location:GLint , count:GLsizei , value: GLuint[]): void;
Napi::Value uniform3uiv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(uniform3uiv);
  return env.Undefined();
}

// function uniform4ui(location:GLint , v0:GLuint , v1:GLuint , v2:GLuint , v3:GLuint ): void;
Napi::Value uniform4ui(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(uniform4ui);
  return env.Undefined();
}

// function uniform4uiv(location:GLint , count:GLsizei , value: GLuint[]): void;
Napi::Value uniform4uiv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(uniform4uiv);
  return env.Undefined();
}

// function vertexAttribI1i(index:GLuint ,v0:GLint): void;
Napi::Value vertexAttribI1i(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttribI1i);
  return env.Undefined();
}

// function vertexAttribI1iv(index:GLuint , v0:GLint[]): void;
Napi::Value vertexAttribI1iv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttribI1iv);
  return env.Undefined();
}

// function vertexAttribI1ui(index:GLuint , v0:GLuint ): void;
Napi::Value vertexAttribI1ui(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttribI1ui);
  return env.Undefined();
}

// function vertexAttribI1uiv(index:GLuint , v0: GLuint[]): void;
Napi::Value vertexAttribI1uiv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttribI1uiv);
  return env.Undefined();
}

// function vertexAttribI2i(index:GLuint ,v0:GLint,v1:GLint): void;
Napi::Value vertexAttribI2i(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttribI2i);
  return env.Undefined();
}

// function vertexAttribI2iv(index:GLuint , v0:GLint[]): void;
Napi::Value vertexAttribI2iv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttribI2iv);
  return env.Undefined();
}

// function vertexAttribI2ui(index:GLuint , v0:GLuint , v1:GLuint ): void;
Napi::Value vertexAttribI2ui(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttribI2ui);
  return env.Undefined();
}

// function vertexAttribI2uiv(index:GLuint , v0: GLuint[]): void;
Napi::Value vertexAttribI2uiv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttribI2uiv);
  return env.Undefined();
}

// function vertexAttribI3i(index:GLuint ,v0:GLint,v1:GLint,v2:GLint): void;
Napi::Value vertexAttribI3i(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttribI3i);
  return env.Undefined();
}

// function vertexAttribI3iv(index:GLuint , v0:GLint[]): void;
Napi::Value vertexAttribI3iv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttribI3iv);
  return env.Undefined();
}

// function vertexAttribI3ui(index:GLuint , v0:GLuint , v1:GLuint , v2:GLuint ): void;
Napi::Value vertexAttribI3ui(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttribI3ui);
  return env.Undefined();
}

// function vertexAttribI3uiv(index:GLuint , v0: GLuint[]): void;
Napi::Value vertexAttribI3uiv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttribI3uiv);
  return env.Undefined();
}

// function vertexAttribI4bv(index:GLuint , v0:GLbyte[]): void;
Napi::Value vertexAttribI4bv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttribI4bv);
  return env.Undefined();
}

// function vertexAttribI4i(index:GLuint ,v0:GLint,v1:GLint,v2:GLint,v3:GLint): void;
Napi::Value vertexAttribI4i(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttribI4i);
  return env.Undefined();
}

// function vertexAttribI4iv(index:GLuint , v0:GLint[]): void;
Napi::Value vertexAttribI4iv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttribI4iv);
  return env.Undefined();
}

// function vertexAttribI4sv(index:GLuint , v0:GLshort[]): void;
Napi::Value vertexAttribI4sv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttribI4sv);
  return env.Undefined();
}

// function vertexAttribI4ubv(index:GLuint , v0:GLubyte[]): void;
Napi::Value vertexAttribI4ubv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttribI4ubv);
  return env.Undefined();
}

// function vertexAttribI4ui(index:GLuint , v0:GLuint , v1:GLuint , v2:GLuint , v3:GLuint ): void;
Napi::Value vertexAttribI4ui(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttribI4ui);
  return env.Undefined();
}

// function vertexAttribI4uiv(index:GLuint , v0: GLuint[]): void;
Napi::Value vertexAttribI4uiv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttribI4uiv);
  return env.Undefined();
}

// function vertexAttribI4usv(index:GLuint , v0:GLushort[]): void;
Napi::Value vertexAttribI4usv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttribI4usv);
  return env.Undefined();
}

// function vertexAttribIPointer(index:GLuint ,size:GLint, type:GLenum , stride:GLsizei , pointer: any): void;
Napi::Value vertexAttribIPointer(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttribIPointer);
  return env.Undefined();
}


    //GL_VERSION_3_1
// function drawArraysInstanced(mode:GLenum ,first:GLint, count:GLsizei , primcount:GLsizei ): void;
Napi::Value drawArraysInstanced(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(drawArraysInstanced);
  return env.Undefined();
}

// function drawElementsInstanced(mode:GLenum , count:GLsizei , type:GLenum , indices:[], primcount:GLsizei ): void;
Napi::Value drawElementsInstanced(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(drawElementsInstanced);
  return env.Undefined();
}

// function primitiveRestartIndex(buffer:GLuint ): void;
Napi::Value primitiveRestartIndex(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(primitiveRestartIndex);
  return env.Undefined();
}

// function texBuffer(target:GLenum , internalFormat:GLenum , buffer:GLuint ): void;
Napi::Value texBuffer(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(texBuffer);
  return env.Undefined();
}


    //GL_VERSION_3_2
// function framebufferTexture(target:GLenum , attachment:GLenum , texture:GLuint ,level:GLint): void;
Napi::Value framebufferTexture(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(framebufferTexture);
  return env.Undefined();
}

// function getBufferParameteri64v(target:GLenum , value:GLenum , data: GLint64[]): void;
Napi::Value getBufferParameteri64v(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getBufferParameteri64v);
  return env.Undefined();
}

// function getInteger64i_v(pname:GLenum , index:GLuint , data:GLint64[]): void;
Napi::Value getInteger64i_v(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getInteger64i_v);
  return env.Undefined();
}


    //GL_VERSION_3_3
// function vertexAttribDivisor (index:GLuint , divisor:GLuint ): void;
Napi::Value vertexAttribDivisor(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(vertexAttribDivisor);
  return env.Undefined();
}


    //GL_VERSION_4_0
// function blendEquationSeparatei(buf:GLuint , modeRGB:GLenum , modeAlpha:GLenum ): void;
Napi::Value blendEquationSeparatei(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(blendEquationSeparatei);
  return env.Undefined();
}

// function blendEquationi(buf:GLuint , mode:GLenum ): void;
Napi::Value blendEquationi(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(blendEquationi);
  return env.Undefined();
}

// function blendFuncSeparatei(buf:GLuint , srcRGB:GLenum , dstRGB:GLenum , srcAlpha:GLenum , dstAlpha:GLenum ): void;
Napi::Value blendFuncSeparatei(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(blendFuncSeparatei);
  return env.Undefined();
}

// function blendFunci(buf:GLuint , src:GLenum , dst:GLenum ): void;
Napi::Value blendFunci(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(blendFunci);
  return env.Undefined();
}

// function minSampleShading(value:GLclampf): void;
Napi::Value minSampleShading(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(minSampleShading);
  return env.Undefined();
}


    //GL_VERSION_4_5
// function getGraphicsResetStatus(): GLenum;
Napi::Value getGraphicsResetStatus(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getGraphicsResetStatus);
  return env.Undefined();
}

// function getnCompressedTexImage(target:GLenum ,lod:GLint, bufSize:GLsizei , pixels:GLvoid[]): void;
Napi::Value getnCompressedTexImage(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getnCompressedTexImage);
  return env.Undefined();
}

// function getnTexImage(tex:GLenum ,level:GLint, format:GLenum , type:GLenum , bufSize:GLsizei , pixels:GLvoid[]): void;
Napi::Value getnTexImage(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getnTexImage);
  return env.Undefined();
}

// function getnUniformdv(program:GLuint ,location:GLint, bufSize:GLsizei , params: GLdouble[]): void;
Napi::Value getnUniformdv(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(getnUniformdv);
  return env.Undefined();
}


    //GL_VERSION_4_6
// function multiDrawArraysIndirectCount(mode:GLenum , indirect: [], drawcount:GLintptr , maxdrawcount:GLsizei , stride:GLsizei ): void;
Napi::Value multiDrawArraysIndirectCount(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(multiDrawArraysIndirectCount);
  return env.Undefined();
}

// function multiDrawElementsIndirectCount(mode:GLenum , type:GLenum , indirect: [], drawcount:GLintptr , maxdrawcount:GLsizei , stride:GLsizei ): void;
Napi::Value multiDrawElementsIndirectCount(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(multiDrawElementsIndirectCount);
  return env.Undefined();
}

// function specializeShader(shader:GLuint , pEntryPoint: string, numSpecializationConstants:GLuint , pConstantIndex:GLuint[], pConstantValue:GLuint[]): void;
Napi::Value specializeShader(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  JS_GL___________________________TODO(specializeShader);
  return env.Undefined();
}



Napi::Object Init(Napi::Env env, Napi::Object exports) {
  /* Version */
  JS_GL_CONSTANT(VERSION_1_1);

  /* AccumOp */
  JS_GL_CONSTANT(ACCUM);
  JS_GL_CONSTANT(LOAD);
  JS_GL_CONSTANT(RETURN);
  JS_GL_CONSTANT(MULT);
  JS_GL_CONSTANT(ADD);

  /* AlphaFunction */
  JS_GL_CONSTANT(NEVER);
  JS_GL_CONSTANT(LESS);
  JS_GL_CONSTANT(EQUAL);
  JS_GL_CONSTANT(LEQUAL);
  JS_GL_CONSTANT(GREATER);
  JS_GL_CONSTANT(NOTEQUAL);
  JS_GL_CONSTANT(GEQUAL);
  JS_GL_CONSTANT(ALWAYS);

  /* AttribMask */
  JS_GL_CONSTANT(CURRENT_BIT);
  JS_GL_CONSTANT(POINT_BIT);
  JS_GL_CONSTANT(LINE_BIT);
  JS_GL_CONSTANT(POLYGON_BIT);
  JS_GL_CONSTANT(POLYGON_STIPPLE_BIT);
  JS_GL_CONSTANT(PIXEL_MODE_BIT);
  JS_GL_CONSTANT(LIGHTING_BIT);
  JS_GL_CONSTANT(FOG_BIT);
  JS_GL_CONSTANT(DEPTH_BUFFER_BIT);
  JS_GL_CONSTANT(ACCUM_BUFFER_BIT);
  JS_GL_CONSTANT(STENCIL_BUFFER_BIT);
  JS_GL_CONSTANT(VIEWPORT_BIT);
  JS_GL_CONSTANT(TRANSFORM_BIT);
  JS_GL_CONSTANT(ENABLE_BIT);
  JS_GL_CONSTANT(COLOR_BUFFER_BIT);
  JS_GL_CONSTANT(HINT_BIT);
  JS_GL_CONSTANT(EVAL_BIT);
  JS_GL_CONSTANT(LIST_BIT);
  JS_GL_CONSTANT(TEXTURE_BIT);
  JS_GL_CONSTANT(SCISSOR_BIT);
  JS_GL_CONSTANT(ALL_ATTRIB_BITS);

  /* BeginMode */
  JS_GL_CONSTANT(POINTS);
  JS_GL_CONSTANT(LINES);
  JS_GL_CONSTANT(LINE_LOOP);
  JS_GL_CONSTANT(LINE_STRIP);
  JS_GL_CONSTANT(TRIANGLES);
  JS_GL_CONSTANT(TRIANGLE_STRIP);
  JS_GL_CONSTANT(TRIANGLE_FAN);
  JS_GL_CONSTANT(QUADS);
  JS_GL_CONSTANT(QUAD_STRIP);
  JS_GL_CONSTANT(POLYGON);

  /* BlendingFactorDest */
  JS_GL_CONSTANT(ZERO);
  JS_GL_CONSTANT(ONE);
  JS_GL_CONSTANT(SRC_COLOR);
  JS_GL_CONSTANT(ONE_MINUS_SRC_COLOR);
  JS_GL_CONSTANT(SRC_ALPHA);
  JS_GL_CONSTANT(ONE_MINUS_SRC_ALPHA);
  JS_GL_CONSTANT(DST_ALPHA);
  JS_GL_CONSTANT(ONE_MINUS_DST_ALPHA);

  /* BlendingFactorSrc */
  /*      GL_ZERO */
  /*      GL_ONE */
  JS_GL_CONSTANT(DST_COLOR);
  JS_GL_CONSTANT(ONE_MINUS_DST_COLOR);
  JS_GL_CONSTANT(SRC_ALPHA_SATURATE);
  /*      GL_SRC_ALPHA */
  /*      GL_ONE_MINUS_SRC_ALPHA */
  /*      GL_DST_ALPHA */
  /*      GL_ONE_MINUS_DST_ALPHA */

  /* Boolean */
  JS_GL_CONSTANT_(_TRUE, "TRUE");
  JS_GL_CONSTANT_(_FALSE, "FALSE");

  /* ClearBufferMask */
  /*      GL_COLOR_BUFFER_BIT */
  /*      GL_ACCUM_BUFFER_BIT */
  /*      GL_STENCIL_BUFFER_BIT */
  /*      GL_DEPTH_BUFFER_BIT */

  /* ClientArrayType */
  /*      GL_VERTEX_ARRAY */
  /*      GL_NORMAL_ARRAY */
  /*      GL_COLOR_ARRAY */
  /*      GL_INDEX_ARRAY */
  /*      GL_TEXTURE_COORD_ARRAY */
  /*      GL_EDGE_FLAG_ARRAY */

  /* ClipPlaneName */
  JS_GL_CONSTANT(CLIP_PLANE0);
  JS_GL_CONSTANT(CLIP_PLANE1);
  JS_GL_CONSTANT(CLIP_PLANE2);
  JS_GL_CONSTANT(CLIP_PLANE3);
  JS_GL_CONSTANT(CLIP_PLANE4);
  JS_GL_CONSTANT(CLIP_PLANE5);

  /* ColorMaterialFace */
  /*      GL_FRONT */
  /*      GL_BACK */
  /*      GL_FRONT_AND_BACK */

  /* ColorMaterialParameter */
  /*      GL_AMBIENT */
  /*      GL_DIFFUSE */
  /*      GL_SPECULAR */
  /*      GL_EMISSION */
  /*      GL_AMBIENT_AND_DIFFUSE */

  /* ColorPointerType */
  /*      GL_BYTE */
  /*      GL_UNSIGNED_BYTE */
  /*      GL_SHORT */
  /*      GL_UNSIGNED_SHORT */
  /*      GL_INT */
  /*      GL_UNSIGNED_INT */
  /*      GL_FLOAT */
  /*      GL_DOUBLE */

  /* CullFaceMode */
  /*      GL_FRONT */
  /*      GL_BACK */
  /*      GL_FRONT_AND_BACK */

  /* DataType */
  JS_GL_CONSTANT(BYTE);
  JS_GL_CONSTANT(UNSIGNED_BYTE);
  JS_GL_CONSTANT(SHORT);
  JS_GL_CONSTANT(UNSIGNED_SHORT);
  JS_GL_CONSTANT(INT);
  JS_GL_CONSTANT(UNSIGNED_INT);
  JS_GL_CONSTANT(FLOAT);
  JS_GL_CONSTANT_(_2_BYTES, "2_BYTES");
  JS_GL_CONSTANT_(_3_BYTES, "3_BYTES");
  JS_GL_CONSTANT_(_4_BYTES, "4_BYTES");
  JS_GL_CONSTANT(DOUBLE);

  /* DepthFunction */
  /*      GL_NEVER */
  /*      GL_LESS */
  /*      GL_EQUAL */
  /*      GL_LEQUAL */
  /*      GL_GREATER */
  /*      GL_NOTEQUAL */
  /*      GL_GEQUAL */
  /*      GL_ALWAYS */

  /* DrawBufferMode */
  JS_GL_CONSTANT(NONE);
  JS_GL_CONSTANT(FRONT_LEFT);
  JS_GL_CONSTANT(FRONT_RIGHT);
  JS_GL_CONSTANT(BACK_LEFT);
  JS_GL_CONSTANT(BACK_RIGHT);
  JS_GL_CONSTANT(FRONT);
  JS_GL_CONSTANT(BACK);
  JS_GL_CONSTANT(LEFT);
  JS_GL_CONSTANT(RIGHT);
  JS_GL_CONSTANT(FRONT_AND_BACK);
  JS_GL_CONSTANT(AUX0);
  JS_GL_CONSTANT(AUX1);
  JS_GL_CONSTANT(AUX2);
  JS_GL_CONSTANT(AUX3);

  /* Enable */
  /*      GL_FOG */
  /*      GL_LIGHTING */
  /*      GL_TEXTURE_1D */
  /*      GL_TEXTURE_2D */
  /*      GL_LINE_STIPPLE */
  /*      GL_POLYGON_STIPPLE */
  /*      GL_CULL_FACE */
  /*      GL_ALPHA_TEST */
  /*      GL_BLEND */
  /*      GL_INDEX_LOGIC_OP */
  /*      GL_COLOR_LOGIC_OP */
  /*      GL_DITHER */
  /*      GL_STENCIL_TEST */
  /*      GL_DEPTH_TEST */
  /*      GL_CLIP_PLANE0 */
  /*      GL_CLIP_PLANE1 */
  /*      GL_CLIP_PLANE2 */
  /*      GL_CLIP_PLANE3 */
  /*      GL_CLIP_PLANE4 */
  /*      GL_CLIP_PLANE5 */
  /*      GL_LIGHT0 */
  /*      GL_LIGHT1 */
  /*      GL_LIGHT2 */
  /*      GL_LIGHT3 */
  /*      GL_LIGHT4 */
  /*      GL_LIGHT5 */
  /*      GL_LIGHT6 */
  /*      GL_LIGHT7 */
  /*      GL_TEXTURE_GEN_S */
  /*      GL_TEXTURE_GEN_T */
  /*      GL_TEXTURE_GEN_R */
  /*      GL_TEXTURE_GEN_Q */
  /*      GL_MAP1_VERTEX_3 */
  /*      GL_MAP1_VERTEX_4 */
  /*      GL_MAP1_COLOR_4 */
  /*      GL_MAP1_INDEX */
  /*      GL_MAP1_NORMAL */
  /*      GL_MAP1_TEXTURE_COORD_1 */
  /*      GL_MAP1_TEXTURE_COORD_2 */
  /*      GL_MAP1_TEXTURE_COORD_3 */
  /*      GL_MAP1_TEXTURE_COORD_4 */
  /*      GL_MAP2_VERTEX_3 */
  /*      GL_MAP2_VERTEX_4 */
  /*      GL_MAP2_COLOR_4 */
  /*      GL_MAP2_INDEX */
  /*      GL_MAP2_NORMAL */
  /*      GL_MAP2_TEXTURE_COORD_1 */
  /*      GL_MAP2_TEXTURE_COORD_2 */
  /*      GL_MAP2_TEXTURE_COORD_3 */
  /*      GL_MAP2_TEXTURE_COORD_4 */
  /*      GL_POINT_SMOOTH */
  /*      GL_LINE_SMOOTH */
  /*      GL_POLYGON_SMOOTH */
  /*      GL_SCISSOR_TEST */
  /*      GL_COLOR_MATERIAL */
  /*      GL_NORMALIZE */
  /*      GL_AUTO_NORMAL */
  /*      GL_VERTEX_ARRAY */
  /*      GL_NORMAL_ARRAY */
  /*      GL_COLOR_ARRAY */
  /*      GL_INDEX_ARRAY */
  /*      GL_TEXTURE_COORD_ARRAY */
  /*      GL_EDGE_FLAG_ARRAY */
  /*      GL_POLYGON_OFFSET_POINT */
  /*      GL_POLYGON_OFFSET_LINE */
  /*      GL_POLYGON_OFFSET_FILL */

  /* ErrorCode */
  JS_GL_CONSTANT_(_NO_ERROR,"NO_ERROR");
  JS_GL_CONSTANT(INVALID_ENUM);
  JS_GL_CONSTANT(INVALID_VALUE);
  JS_GL_CONSTANT(INVALID_OPERATION);
  JS_GL_CONSTANT(STACK_OVERFLOW);
  JS_GL_CONSTANT(STACK_UNDERFLOW);
  JS_GL_CONSTANT(OUT_OF_MEMORY);

  /* FeedBackMode */
  JS_GL_CONSTANT_(_2D, "2D");
  JS_GL_CONSTANT_(_3D, "3D");
  JS_GL_CONSTANT_(_3D_COLOR, "3D_COLOR");
  JS_GL_CONSTANT_(_3D_COLOR_TEXTURE, "3D_COLOR_TEXTURE");
  JS_GL_CONSTANT_(_4D_COLOR_TEXTURE, "4D_COLOR_TEXTURE");

  /* FeedBackToken */
  JS_GL_CONSTANT(PASS_THROUGH_TOKEN);
  JS_GL_CONSTANT(POINT_TOKEN);
  JS_GL_CONSTANT(LINE_TOKEN);
  JS_GL_CONSTANT(POLYGON_TOKEN);
  JS_GL_CONSTANT(BITMAP_TOKEN);
  JS_GL_CONSTANT(DRAW_PIXEL_TOKEN);
  JS_GL_CONSTANT(COPY_PIXEL_TOKEN);
  JS_GL_CONSTANT(LINE_RESET_TOKEN);

  /* FogMode */
  /*      GL_LINEAR */
  JS_GL_CONSTANT(EXP);
  JS_GL_CONSTANT(EXP2);


  /* FogParameter */
  /*      GL_FOG_COLOR */
  /*      GL_FOG_DENSITY */
  /*      GL_FOG_END */
  /*      GL_FOG_INDEX */
  /*      GL_FOG_MODE */
  /*      GL_FOG_START */

  /* FrontFaceDirection */
  JS_GL_CONSTANT(CW);
  JS_GL_CONSTANT(CCW);

  /* GetMapTarget */
  JS_GL_CONSTANT(COEFF);
  JS_GL_CONSTANT(ORDER);
  JS_GL_CONSTANT(DOMAIN);

  /* GetPixelMap */
  /*      GL_PIXEL_MAP_I_TO_I */
  /*      GL_PIXEL_MAP_S_TO_S */
  /*      GL_PIXEL_MAP_I_TO_R */
  /*      GL_PIXEL_MAP_I_TO_G */
  /*      GL_PIXEL_MAP_I_TO_B */
  /*      GL_PIXEL_MAP_I_TO_A */
  /*      GL_PIXEL_MAP_R_TO_R */
  /*      GL_PIXEL_MAP_G_TO_G */
  /*      GL_PIXEL_MAP_B_TO_B */
  /*      GL_PIXEL_MAP_A_TO_A */

  /* GetPointerTarget */
  /*      GL_VERTEX_ARRAY_POINTER */
  /*      GL_NORMAL_ARRAY_POINTER */
  /*      GL_COLOR_ARRAY_POINTER */
  /*      GL_INDEX_ARRAY_POINTER */
  /*      GL_TEXTURE_COORD_ARRAY_POINTER */
  /*      GL_EDGE_FLAG_ARRAY_POINTER */

  /* GetTarget */
  JS_GL_CONSTANT(CURRENT_COLOR);
  JS_GL_CONSTANT(CURRENT_INDEX);
  JS_GL_CONSTANT(CURRENT_NORMAL);
  JS_GL_CONSTANT(CURRENT_TEXTURE_COORDS);
  JS_GL_CONSTANT(CURRENT_RASTER_COLOR);
  JS_GL_CONSTANT(CURRENT_RASTER_INDEX);
  JS_GL_CONSTANT(CURRENT_RASTER_TEXTURE_COORDS);
  JS_GL_CONSTANT(CURRENT_RASTER_POSITION);
  JS_GL_CONSTANT(CURRENT_RASTER_POSITION_VALID);
  JS_GL_CONSTANT(CURRENT_RASTER_DISTANCE);
  JS_GL_CONSTANT(POINT_SMOOTH);
  JS_GL_CONSTANT(POINT_SIZE);
  JS_GL_CONSTANT(POINT_SIZE_RANGE);
  JS_GL_CONSTANT(POINT_SIZE_GRANULARITY);
  JS_GL_CONSTANT(LINE_SMOOTH);
  JS_GL_CONSTANT(LINE_WIDTH);
  JS_GL_CONSTANT(LINE_WIDTH_RANGE);
  JS_GL_CONSTANT(LINE_WIDTH_GRANULARITY);
  JS_GL_CONSTANT(LINE_STIPPLE);
  JS_GL_CONSTANT(LINE_STIPPLE_PATTERN);
  JS_GL_CONSTANT(LINE_STIPPLE_REPEAT);
  JS_GL_CONSTANT(LIST_MODE);
  JS_GL_CONSTANT(MAX_LIST_NESTING);
  JS_GL_CONSTANT(LIST_BASE);
  JS_GL_CONSTANT(LIST_INDEX);
  JS_GL_CONSTANT(POLYGON_MODE);
  JS_GL_CONSTANT(POLYGON_SMOOTH);
  JS_GL_CONSTANT(POLYGON_STIPPLE);
  JS_GL_CONSTANT(EDGE_FLAG);
  JS_GL_CONSTANT(CULL_FACE);
  JS_GL_CONSTANT(CULL_FACE_MODE);
  JS_GL_CONSTANT(FRONT_FACE);
  JS_GL_CONSTANT(LIGHTING);
  JS_GL_CONSTANT(LIGHT_MODEL_LOCAL_VIEWER);
  JS_GL_CONSTANT(LIGHT_MODEL_TWO_SIDE);
  JS_GL_CONSTANT(LIGHT_MODEL_AMBIENT);
  JS_GL_CONSTANT(SHADE_MODEL);
  JS_GL_CONSTANT(COLOR_MATERIAL_FACE);
  JS_GL_CONSTANT(COLOR_MATERIAL_PARAMETER);
  JS_GL_CONSTANT(COLOR_MATERIAL);
  JS_GL_CONSTANT(FOG);
  JS_GL_CONSTANT(FOG_INDEX);
  JS_GL_CONSTANT(FOG_DENSITY);
  JS_GL_CONSTANT(FOG_START);
  JS_GL_CONSTANT(FOG_END);
  JS_GL_CONSTANT(FOG_MODE);
  JS_GL_CONSTANT(FOG_COLOR);
  JS_GL_CONSTANT(DEPTH_RANGE);
  JS_GL_CONSTANT(DEPTH_TEST);
  JS_GL_CONSTANT(DEPTH_WRITEMASK);
  JS_GL_CONSTANT(DEPTH_CLEAR_VALUE);
  JS_GL_CONSTANT(DEPTH_FUNC);
  JS_GL_CONSTANT(ACCUM_CLEAR_VALUE);
  JS_GL_CONSTANT(STENCIL_TEST);
  JS_GL_CONSTANT(STENCIL_CLEAR_VALUE);
  JS_GL_CONSTANT(STENCIL_FUNC);
  JS_GL_CONSTANT(STENCIL_VALUE_MASK);
  JS_GL_CONSTANT(STENCIL_FAIL);
  JS_GL_CONSTANT(STENCIL_PASS_DEPTH_FAIL);
  JS_GL_CONSTANT(STENCIL_PASS_DEPTH_PASS);
  JS_GL_CONSTANT(STENCIL_REF);
  JS_GL_CONSTANT(STENCIL_WRITEMASK);
  JS_GL_CONSTANT(MATRIX_MODE);
  JS_GL_CONSTANT(NORMALIZE);
  JS_GL_CONSTANT(VIEWPORT);
  JS_GL_CONSTANT(MODELVIEW_STACK_DEPTH);
  JS_GL_CONSTANT(PROJECTION_STACK_DEPTH);
  JS_GL_CONSTANT(TEXTURE_STACK_DEPTH);
  JS_GL_CONSTANT(MODELVIEW_MATRIX);
  JS_GL_CONSTANT(PROJECTION_MATRIX);
  JS_GL_CONSTANT(TEXTURE_MATRIX);
  JS_GL_CONSTANT(ATTRIB_STACK_DEPTH);
  JS_GL_CONSTANT(CLIENT_ATTRIB_STACK_DEPTH);
  JS_GL_CONSTANT(ALPHA_TEST);
  JS_GL_CONSTANT(ALPHA_TEST_FUNC);
  JS_GL_CONSTANT(ALPHA_TEST_REF);
  JS_GL_CONSTANT(DITHER);
  JS_GL_CONSTANT(BLEND_DST);
  JS_GL_CONSTANT(BLEND_SRC);
  JS_GL_CONSTANT(BLEND);
  JS_GL_CONSTANT(LOGIC_OP_MODE);
  JS_GL_CONSTANT(INDEX_LOGIC_OP);
  JS_GL_CONSTANT(COLOR_LOGIC_OP);
  JS_GL_CONSTANT(AUX_BUFFERS);
  JS_GL_CONSTANT(DRAW_BUFFER);
  JS_GL_CONSTANT(READ_BUFFER);
  JS_GL_CONSTANT(SCISSOR_BOX);
  JS_GL_CONSTANT(SCISSOR_TEST);
  JS_GL_CONSTANT(INDEX_CLEAR_VALUE);
  JS_GL_CONSTANT(INDEX_WRITEMASK);
  JS_GL_CONSTANT(COLOR_CLEAR_VALUE);
  JS_GL_CONSTANT(COLOR_WRITEMASK);
  JS_GL_CONSTANT(INDEX_MODE);
  JS_GL_CONSTANT(RGBA_MODE);
  JS_GL_CONSTANT(DOUBLEBUFFER);
  JS_GL_CONSTANT(STEREO);
  JS_GL_CONSTANT(RENDER_MODE);
  JS_GL_CONSTANT(PERSPECTIVE_CORRECTION_HINT);
  JS_GL_CONSTANT(POINT_SMOOTH_HINT);
  JS_GL_CONSTANT(LINE_SMOOTH_HINT);
  JS_GL_CONSTANT(POLYGON_SMOOTH_HINT);
  JS_GL_CONSTANT(FOG_HINT);
  JS_GL_CONSTANT(TEXTURE_GEN_S);
  JS_GL_CONSTANT(TEXTURE_GEN_T);
  JS_GL_CONSTANT(TEXTURE_GEN_R);
  JS_GL_CONSTANT(TEXTURE_GEN_Q);
  JS_GL_CONSTANT(PIXEL_MAP_I_TO_I);
  JS_GL_CONSTANT(PIXEL_MAP_S_TO_S);
  JS_GL_CONSTANT(PIXEL_MAP_I_TO_R);
  JS_GL_CONSTANT(PIXEL_MAP_I_TO_G);
  JS_GL_CONSTANT(PIXEL_MAP_I_TO_B);
  JS_GL_CONSTANT(PIXEL_MAP_I_TO_A);
  JS_GL_CONSTANT(PIXEL_MAP_R_TO_R);
  JS_GL_CONSTANT(PIXEL_MAP_G_TO_G);
  JS_GL_CONSTANT(PIXEL_MAP_B_TO_B);
  JS_GL_CONSTANT(PIXEL_MAP_A_TO_A);
  JS_GL_CONSTANT(PIXEL_MAP_I_TO_I_SIZE);
  JS_GL_CONSTANT(PIXEL_MAP_S_TO_S_SIZE);
  JS_GL_CONSTANT(PIXEL_MAP_I_TO_R_SIZE);
  JS_GL_CONSTANT(PIXEL_MAP_I_TO_G_SIZE);
  JS_GL_CONSTANT(PIXEL_MAP_I_TO_B_SIZE);
  JS_GL_CONSTANT(PIXEL_MAP_I_TO_A_SIZE);
  JS_GL_CONSTANT(PIXEL_MAP_R_TO_R_SIZE);
  JS_GL_CONSTANT(PIXEL_MAP_G_TO_G_SIZE);
  JS_GL_CONSTANT(PIXEL_MAP_B_TO_B_SIZE);
  JS_GL_CONSTANT(PIXEL_MAP_A_TO_A_SIZE);
  JS_GL_CONSTANT(UNPACK_SWAP_BYTES);
  JS_GL_CONSTANT(UNPACK_LSB_FIRST);
  JS_GL_CONSTANT(UNPACK_ROW_LENGTH);
  JS_GL_CONSTANT(UNPACK_SKIP_ROWS);
  JS_GL_CONSTANT(UNPACK_SKIP_PIXELS);
  JS_GL_CONSTANT(UNPACK_ALIGNMENT);
  JS_GL_CONSTANT(PACK_SWAP_BYTES);
  JS_GL_CONSTANT(PACK_LSB_FIRST);
  JS_GL_CONSTANT(PACK_ROW_LENGTH);
  JS_GL_CONSTANT(PACK_SKIP_ROWS);
  JS_GL_CONSTANT(PACK_SKIP_PIXELS);
  JS_GL_CONSTANT(PACK_ALIGNMENT);
  JS_GL_CONSTANT(MAP_COLOR);
  JS_GL_CONSTANT(MAP_STENCIL);
  JS_GL_CONSTANT(INDEX_SHIFT);
  JS_GL_CONSTANT(INDEX_OFFSET);
  JS_GL_CONSTANT(RED_SCALE);
  JS_GL_CONSTANT(RED_BIAS);
  JS_GL_CONSTANT(ZOOM_X);
  JS_GL_CONSTANT(ZOOM_Y);
  JS_GL_CONSTANT(GREEN_SCALE);
  JS_GL_CONSTANT(GREEN_BIAS);
  JS_GL_CONSTANT(BLUE_SCALE);
  JS_GL_CONSTANT(BLUE_BIAS);
  JS_GL_CONSTANT(ALPHA_SCALE);
  JS_GL_CONSTANT(ALPHA_BIAS);
  JS_GL_CONSTANT(DEPTH_SCALE);
  JS_GL_CONSTANT(DEPTH_BIAS);
  JS_GL_CONSTANT(MAX_EVAL_ORDER);
  JS_GL_CONSTANT(MAX_LIGHTS);
  JS_GL_CONSTANT(MAX_CLIP_PLANES);
  JS_GL_CONSTANT(MAX_TEXTURE_SIZE);
  JS_GL_CONSTANT(MAX_PIXEL_MAP_TABLE);
  JS_GL_CONSTANT(MAX_ATTRIB_STACK_DEPTH);
  JS_GL_CONSTANT(MAX_MODELVIEW_STACK_DEPTH);
  JS_GL_CONSTANT(MAX_NAME_STACK_DEPTH);
  JS_GL_CONSTANT(MAX_PROJECTION_STACK_DEPTH);
  JS_GL_CONSTANT(MAX_TEXTURE_STACK_DEPTH);
  JS_GL_CONSTANT(MAX_VIEWPORT_DIMS);
  JS_GL_CONSTANT(MAX_CLIENT_ATTRIB_STACK_DEPTH);
  JS_GL_CONSTANT(SUBPIXEL_BITS);
  JS_GL_CONSTANT(INDEX_BITS);
  JS_GL_CONSTANT(RED_BITS);
  JS_GL_CONSTANT(GREEN_BITS);
  JS_GL_CONSTANT(BLUE_BITS);
  JS_GL_CONSTANT(ALPHA_BITS);
  JS_GL_CONSTANT(DEPTH_BITS);
  JS_GL_CONSTANT(STENCIL_BITS);
  JS_GL_CONSTANT(ACCUM_RED_BITS);
  JS_GL_CONSTANT(ACCUM_GREEN_BITS);
  JS_GL_CONSTANT(ACCUM_BLUE_BITS);
  JS_GL_CONSTANT(ACCUM_ALPHA_BITS);
  JS_GL_CONSTANT(NAME_STACK_DEPTH);
  JS_GL_CONSTANT(AUTO_NORMAL);
  JS_GL_CONSTANT(MAP1_COLOR_4);
  JS_GL_CONSTANT(MAP1_INDEX);
  JS_GL_CONSTANT(MAP1_NORMAL);
  JS_GL_CONSTANT(MAP1_TEXTURE_COORD_1);
  JS_GL_CONSTANT(MAP1_TEXTURE_COORD_2);
  JS_GL_CONSTANT(MAP1_TEXTURE_COORD_3);
  JS_GL_CONSTANT(MAP1_TEXTURE_COORD_4);
  JS_GL_CONSTANT(MAP1_VERTEX_3);
  JS_GL_CONSTANT(MAP1_VERTEX_4);
  JS_GL_CONSTANT(MAP2_COLOR_4);
  JS_GL_CONSTANT(MAP2_INDEX);
  JS_GL_CONSTANT(MAP2_NORMAL);
  JS_GL_CONSTANT(MAP2_TEXTURE_COORD_1);
  JS_GL_CONSTANT(MAP2_TEXTURE_COORD_2);
  JS_GL_CONSTANT(MAP2_TEXTURE_COORD_3);
  JS_GL_CONSTANT(MAP2_TEXTURE_COORD_4);
  JS_GL_CONSTANT(MAP2_VERTEX_3);
  JS_GL_CONSTANT(MAP2_VERTEX_4);
  JS_GL_CONSTANT(MAP1_GRID_DOMAIN);
  JS_GL_CONSTANT(MAP1_GRID_SEGMENTS);
  JS_GL_CONSTANT(MAP2_GRID_DOMAIN);
  JS_GL_CONSTANT(MAP2_GRID_SEGMENTS);
  JS_GL_CONSTANT(TEXTURE_1D);
  JS_GL_CONSTANT(TEXTURE_2D);
  JS_GL_CONSTANT(FEEDBACK_BUFFER_POINTER);
  JS_GL_CONSTANT(FEEDBACK_BUFFER_SIZE);
  JS_GL_CONSTANT(FEEDBACK_BUFFER_TYPE);
  JS_GL_CONSTANT(SELECTION_BUFFER_POINTER);
  JS_GL_CONSTANT(SELECTION_BUFFER_SIZE);
  /*      GL_TEXTURE_BINDING_1D */
  /*      GL_TEXTURE_BINDING_2D */
  /*      GL_VERTEX_ARRAY */
  /*      GL_NORMAL_ARRAY */
  /*      GL_COLOR_ARRAY */
  /*      GL_INDEX_ARRAY */
  /*      GL_TEXTURE_COORD_ARRAY */
  /*      GL_EDGE_FLAG_ARRAY */
  /*      GL_VERTEX_ARRAY_SIZE */
  /*      GL_VERTEX_ARRAY_TYPE */
  /*      GL_VERTEX_ARRAY_STRIDE */
  /*      GL_NORMAL_ARRAY_TYPE */
  /*      GL_NORMAL_ARRAY_STRIDE */
  /*      GL_COLOR_ARRAY_SIZE */
  /*      GL_COLOR_ARRAY_TYPE */
  /*      GL_COLOR_ARRAY_STRIDE */
  /*      GL_INDEX_ARRAY_TYPE */
  /*      GL_INDEX_ARRAY_STRIDE */
  /*      GL_TEXTURE_COORD_ARRAY_SIZE */
  /*      GL_TEXTURE_COORD_ARRAY_TYPE */
  /*      GL_TEXTURE_COORD_ARRAY_STRIDE */
  /*      GL_EDGE_FLAG_ARRAY_STRIDE */
  /*      GL_POLYGON_OFFSET_FACTOR */
  /*      GL_POLYGON_OFFSET_UNITS */

  /* GetTextureParameter */
  /*      GL_TEXTURE_MAG_FILTER */
  /*      GL_TEXTURE_MIN_FILTER */
  /*      GL_TEXTURE_WRAP_S */
  /*      GL_TEXTURE_WRAP_T */
  JS_GL_CONSTANT(TEXTURE_WIDTH);
  JS_GL_CONSTANT(TEXTURE_HEIGHT);
  JS_GL_CONSTANT(TEXTURE_INTERNAL_FORMAT);
  JS_GL_CONSTANT(TEXTURE_BORDER_COLOR);
  JS_GL_CONSTANT(TEXTURE_BORDER);
  /*      GL_TEXTURE_RED_SIZE */
  /*      GL_TEXTURE_GREEN_SIZE */
  /*      GL_TEXTURE_BLUE_SIZE */
  /*      GL_TEXTURE_ALPHA_SIZE */
  /*      GL_TEXTURE_LUMINANCE_SIZE */
  /*      GL_TEXTURE_INTENSITY_SIZE */
  /*      GL_TEXTURE_PRIORITY */
  /*      GL_TEXTURE_RESIDENT */

  /* HintMode */
  JS_GL_CONSTANT(DONT_CARE);
  JS_GL_CONSTANT(FASTEST);
  JS_GL_CONSTANT(NICEST);

  /* HintTarget */
  /*      GL_PERSPECTIVE_CORRECTION_HINT */
  /*      GL_POINT_SMOOTH_HINT */
  /*      GL_LINE_SMOOTH_HINT */
  /*      GL_POLYGON_SMOOTH_HINT */
  /*      GL_FOG_HINT */
  /*      GL_PHONG_HINT */

  /* IndexPointerType */
  /*      GL_SHORT */
  /*      GL_INT */
  /*      GL_FLOAT */
  /*      GL_DOUBLE */

  /* LightModelParameter */
  /*      GL_LIGHT_MODEL_AMBIENT */
  /*      GL_LIGHT_MODEL_LOCAL_VIEWER */
  /*      GL_LIGHT_MODEL_TWO_SIDE */

  /* LightName */
  JS_GL_CONSTANT(LIGHT0);
  JS_GL_CONSTANT(LIGHT1);
  JS_GL_CONSTANT(LIGHT2);
  JS_GL_CONSTANT(LIGHT3);
  JS_GL_CONSTANT(LIGHT4);
  JS_GL_CONSTANT(LIGHT5);
  JS_GL_CONSTANT(LIGHT6);
  JS_GL_CONSTANT(LIGHT7);

  /* LightParameter */
  JS_GL_CONSTANT(AMBIENT);
  JS_GL_CONSTANT(DIFFUSE);
  JS_GL_CONSTANT(SPECULAR);
  JS_GL_CONSTANT(POSITION);
  JS_GL_CONSTANT(SPOT_DIRECTION);
  JS_GL_CONSTANT(SPOT_EXPONENT);
  JS_GL_CONSTANT(SPOT_CUTOFF);
  JS_GL_CONSTANT(CONSTANT_ATTENUATION);
  JS_GL_CONSTANT(LINEAR_ATTENUATION);
  JS_GL_CONSTANT(QUADRATIC_ATTENUATION);

  /* InterleavedArrays */
  /*      GL_V2F */
  /*      GL_V3F */
  /*      GL_C4UB_V2F */
  /*      GL_C4UB_V3F */
  /*      GL_C3F_V3F */
  /*      GL_N3F_V3F */
  /*      GL_C4F_N3F_V3F */
  /*      GL_T2F_V3F */
  /*      GL_T4F_V4F */
  /*      GL_T2F_C4UB_V3F */
  /*      GL_T2F_C3F_V3F */
  /*      GL_T2F_N3F_V3F */
  /*      GL_T2F_C4F_N3F_V3F */
  /*      GL_T4F_C4F_N3F_V4F */

  /* ListMode */
  JS_GL_CONSTANT(COMPILE);
  JS_GL_CONSTANT(COMPILE_AND_EXECUTE);

  /* ListNameType */
  /*      GL_BYTE */
  /*      GL_UNSIGNED_BYTE */
  /*      GL_SHORT */
  /*      GL_UNSIGNED_SHORT */
  /*      GL_INT */
  /*      GL_UNSIGNED_INT */
  /*      GL_FLOAT */
  /*      GL_2_BYTES */
  /*      GL_3_BYTES */
  /*      GL_4_BYTES */

  /* LogicOp */
  JS_GL_CONSTANT(CLEAR);
  JS_GL_CONSTANT(AND);
  JS_GL_CONSTANT(AND_REVERSE);
  JS_GL_CONSTANT(COPY);
  JS_GL_CONSTANT(AND_INVERTED);
  JS_GL_CONSTANT(NOOP);
  JS_GL_CONSTANT(XOR);
  JS_GL_CONSTANT(OR);
  JS_GL_CONSTANT(NOR);
  JS_GL_CONSTANT(EQUIV);
  JS_GL_CONSTANT(INVERT);
  JS_GL_CONSTANT(OR_REVERSE);
  JS_GL_CONSTANT(COPY_INVERTED);
  JS_GL_CONSTANT(OR_INVERTED);
  JS_GL_CONSTANT(NAND);
  JS_GL_CONSTANT(SET);

  /* MapTarget */
  /*      GL_MAP1_COLOR_4 */
  /*      GL_MAP1_INDEX */
  /*      GL_MAP1_NORMAL */
  /*      GL_MAP1_TEXTURE_COORD_1 */
  /*      GL_MAP1_TEXTURE_COORD_2 */
  /*      GL_MAP1_TEXTURE_COORD_3 */
  /*      GL_MAP1_TEXTURE_COORD_4 */
  /*      GL_MAP1_VERTEX_3 */
  /*      GL_MAP1_VERTEX_4 */
  /*      GL_MAP2_COLOR_4 */
  /*      GL_MAP2_INDEX */
  /*      GL_MAP2_NORMAL */
  /*      GL_MAP2_TEXTURE_COORD_1 */
  /*      GL_MAP2_TEXTURE_COORD_2 */
  /*      GL_MAP2_TEXTURE_COORD_3 */
  /*      GL_MAP2_TEXTURE_COORD_4 */
  /*      GL_MAP2_VERTEX_3 */
  /*      GL_MAP2_VERTEX_4 */

  /* MaterialFace */
  /*      GL_FRONT */
  /*      GL_BACK */
  /*      GL_FRONT_AND_BACK */

  /* MaterialParameter */
  JS_GL_CONSTANT(EMISSION);
  JS_GL_CONSTANT(SHININESS);
  JS_GL_CONSTANT(AMBIENT_AND_DIFFUSE);
  JS_GL_CONSTANT(COLOR_INDEXES);
  /*      GL_AMBIENT */
  /*      GL_DIFFUSE */
  /*      GL_SPECULAR */

  /* MatrixMode */
  JS_GL_CONSTANT(MODELVIEW);
  JS_GL_CONSTANT(PROJECTION);
  JS_GL_CONSTANT(TEXTURE);

  /* MeshMode1 */
  /*      GL_POINT */
  /*      GL_LINE */

  /* MeshMode2 */
  /*      GL_POINT */
  /*      GL_LINE */
  /*      GL_FILL */

  /* NormalPointerType */
  /*      GL_BYTE */
  /*      GL_SHORT */
  /*      GL_INT */
  /*      GL_FLOAT */
  /*      GL_DOUBLE */

  /* PixelCopyType */
  JS_GL_CONSTANT(COLOR);
  JS_GL_CONSTANT(DEPTH);
  JS_GL_CONSTANT(STENCIL);

  /* PixelFormat */
  JS_GL_CONSTANT(COLOR_INDEX);
  JS_GL_CONSTANT(STENCIL_INDEX);
  JS_GL_CONSTANT(DEPTH_COMPONENT);
  JS_GL_CONSTANT(RED);
  JS_GL_CONSTANT(GREEN);
  JS_GL_CONSTANT(BLUE);
  JS_GL_CONSTANT(ALPHA);
  JS_GL_CONSTANT(RGB);
  JS_GL_CONSTANT(RGBA);
  JS_GL_CONSTANT(LUMINANCE);
  JS_GL_CONSTANT(LUMINANCE_ALPHA);

  /* PixelMap */
  /*      GL_PIXEL_MAP_I_TO_I */
  /*      GL_PIXEL_MAP_S_TO_S */
  /*      GL_PIXEL_MAP_I_TO_R */
  /*      GL_PIXEL_MAP_I_TO_G */
  /*      GL_PIXEL_MAP_I_TO_B */
  /*      GL_PIXEL_MAP_I_TO_A */
  /*      GL_PIXEL_MAP_R_TO_R */
  /*      GL_PIXEL_MAP_G_TO_G */
  /*      GL_PIXEL_MAP_B_TO_B */
  /*      GL_PIXEL_MAP_A_TO_A */

  /* PixelStore */
  /*      GL_UNPACK_SWAP_BYTES */
  /*      GL_UNPACK_LSB_FIRST */
  /*      GL_UNPACK_ROW_LENGTH */
  /*      GL_UNPACK_SKIP_ROWS */
  /*      GL_UNPACK_SKIP_PIXELS */
  /*      GL_UNPACK_ALIGNMENT */
  /*      GL_PACK_SWAP_BYTES */
  /*      GL_PACK_LSB_FIRST */
  /*      GL_PACK_ROW_LENGTH */
  /*      GL_PACK_SKIP_ROWS */
  /*      GL_PACK_SKIP_PIXELS */
  /*      GL_PACK_ALIGNMENT */

  /* PixelTransfer */
  /*      GL_MAP_COLOR */
  /*      GL_MAP_STENCIL */
  /*      GL_INDEX_SHIFT */
  /*      GL_INDEX_OFFSET */
  /*      GL_RED_SCALE */
  /*      GL_RED_BIAS */
  /*      GL_GREEN_SCALE */
  /*      GL_GREEN_BIAS */
  /*      GL_BLUE_SCALE */
  /*      GL_BLUE_BIAS */
  /*      GL_ALPHA_SCALE */
  /*      GL_ALPHA_BIAS */
  /*      GL_DEPTH_SCALE */
  /*      GL_DEPTH_BIAS */

  /* PixelType */
  JS_GL_CONSTANT(BITMAP);
  /*      GL_BYTE */
  /*      GL_UNSIGNED_BYTE */
  /*      GL_SHORT */
  /*      GL_UNSIGNED_SHORT */
  /*      GL_INT */
  /*      GL_UNSIGNED_INT */
  /*      GL_FLOAT */

  /* PolygonMode */
  JS_GL_CONSTANT(POINT);
  JS_GL_CONSTANT(LINE);
  JS_GL_CONSTANT(FILL);

  /* ReadBufferMode */
  /*      GL_FRONT_LEFT */
  /*      GL_FRONT_RIGHT */
  /*      GL_BACK_LEFT */
  /*      GL_BACK_RIGHT */
  /*      GL_FRONT */
  /*      GL_BACK */
  /*      GL_LEFT */
  /*      GL_RIGHT */
  /*      GL_AUX0 */
  /*      GL_AUX1 */
  /*      GL_AUX2 */
  /*      GL_AUX3 */

  /* RenderingMode */
  JS_GL_CONSTANT(RENDER);
  JS_GL_CONSTANT(FEEDBACK);
  JS_GL_CONSTANT(SELECT);

  /* ShadingModel */
  JS_GL_CONSTANT(FLAT);
  JS_GL_CONSTANT(SMOOTH);


  /* StencilFunction */
  /*      GL_NEVER */
  /*      GL_LESS */
  /*      GL_EQUAL */
  /*      GL_LEQUAL */
  /*      GL_GREATER */
  /*      GL_NOTEQUAL */
  /*      GL_GEQUAL */
  /*      GL_ALWAYS */

  /* StencilOp */
  /*      GL_ZERO */
  JS_GL_CONSTANT(KEEP);
  JS_GL_CONSTANT(REPLACE);
  JS_GL_CONSTANT(INCR);
  JS_GL_CONSTANT(DECR);
  /*      GL_INVERT */

  /* StringName */
  JS_GL_CONSTANT(VENDOR);
  JS_GL_CONSTANT(RENDERER);
  JS_GL_CONSTANT(VERSION);
  JS_GL_CONSTANT(EXTENSIONS);

  /* TextureCoordName */
  JS_GL_CONSTANT(S);
  JS_GL_CONSTANT(T);
  JS_GL_CONSTANT(R);
  JS_GL_CONSTANT(Q);

  /* TexCoordPointerType */
  /*      GL_SHORT */
  /*      GL_INT */
  /*      GL_FLOAT */
  /*      GL_DOUBLE */

  /* TextureEnvMode */
  JS_GL_CONSTANT(MODULATE);
  JS_GL_CONSTANT(DECAL);
  /*      GL_BLEND */
  /*      GL_REPLACE */

  /* TextureEnvParameter */
  JS_GL_CONSTANT(TEXTURE_ENV_MODE);
  JS_GL_CONSTANT(TEXTURE_ENV_COLOR);

  /* TextureEnvTarget */
  JS_GL_CONSTANT(TEXTURE_ENV);

  /* TextureGenMode */
  JS_GL_CONSTANT(EYE_LINEAR);
  JS_GL_CONSTANT(OBJECT_LINEAR);
  JS_GL_CONSTANT(SPHERE_MAP);

  /* TextureGenParameter */
  JS_GL_CONSTANT(TEXTURE_GEN_MODE);
  JS_GL_CONSTANT(OBJECT_PLANE);
  JS_GL_CONSTANT(EYE_PLANE);

  /* TextureMagFilter */
  JS_GL_CONSTANT(NEAREST);
  JS_GL_CONSTANT(LINEAR);

  /* TextureMinFilter */
  /*      GL_NEAREST */
  /*      GL_LINEAR */
  JS_GL_CONSTANT(NEAREST_MIPMAP_NEAREST);
  JS_GL_CONSTANT(LINEAR_MIPMAP_NEAREST);
  JS_GL_CONSTANT(NEAREST_MIPMAP_LINEAR);
  JS_GL_CONSTANT(LINEAR_MIPMAP_LINEAR);

  /* TextureParameterName */
  JS_GL_CONSTANT(TEXTURE_MAG_FILTER);
  JS_GL_CONSTANT(TEXTURE_MIN_FILTER);
  JS_GL_CONSTANT(TEXTURE_WRAP_S);
  JS_GL_CONSTANT(TEXTURE_WRAP_T);
  /*      GL_TEXTURE_BORDER_COLOR */
  /*      GL_TEXTURE_PRIORITY */

  /* TextureTarget */
  /*      GL_TEXTURE_1D */
  /*      GL_TEXTURE_2D */
  /*      GL_PROXY_TEXTURE_1D */
  /*      GL_PROXY_TEXTURE_2D */

  /* TextureWrapMode */
  JS_GL_CONSTANT(CLAMP);
  JS_GL_CONSTANT(REPEAT);

  /* VertexPointerType */
  /*      GL_SHORT */
  /*      GL_INT */
  /*      GL_FLOAT */
  /*      GL_DOUBLE */

  /* ClientAttribMask */
  JS_GL_CONSTANT(CLIENT_PIXEL_STORE_BIT);
  JS_GL_CONSTANT(CLIENT_VERTEX_ARRAY_BIT);
  JS_GL_CONSTANT(CLIENT_ALL_ATTRIB_BITS);

  /* polygon_offset */
  JS_GL_CONSTANT(POLYGON_OFFSET_FACTOR);
  JS_GL_CONSTANT(POLYGON_OFFSET_UNITS);
  JS_GL_CONSTANT(POLYGON_OFFSET_POINT);
  JS_GL_CONSTANT(POLYGON_OFFSET_LINE);
  JS_GL_CONSTANT(POLYGON_OFFSET_FILL);

  /* texture */
  JS_GL_CONSTANT(ALPHA4);
  JS_GL_CONSTANT(ALPHA8);
  JS_GL_CONSTANT(ALPHA12);
  JS_GL_CONSTANT(ALPHA16);
  JS_GL_CONSTANT(LUMINANCE4);
  JS_GL_CONSTANT(LUMINANCE8);
  JS_GL_CONSTANT(LUMINANCE12);
  JS_GL_CONSTANT(LUMINANCE16);
  JS_GL_CONSTANT(LUMINANCE4_ALPHA4);
  JS_GL_CONSTANT(LUMINANCE6_ALPHA2);
  JS_GL_CONSTANT(LUMINANCE8_ALPHA8);
  JS_GL_CONSTANT(LUMINANCE12_ALPHA4);
  JS_GL_CONSTANT(LUMINANCE12_ALPHA12);
  JS_GL_CONSTANT(LUMINANCE16_ALPHA16);
  JS_GL_CONSTANT(INTENSITY);
  JS_GL_CONSTANT(INTENSITY4);
  JS_GL_CONSTANT(INTENSITY8);
  JS_GL_CONSTANT(INTENSITY12);
  JS_GL_CONSTANT(INTENSITY16);
  JS_GL_CONSTANT(R3_G3_B2);
  JS_GL_CONSTANT(RGB4);
  JS_GL_CONSTANT(RGB5);
  JS_GL_CONSTANT(RGB8);
  JS_GL_CONSTANT(RGB10);
  JS_GL_CONSTANT(RGB12);
  JS_GL_CONSTANT(RGB16);
  JS_GL_CONSTANT(RGBA2);
  JS_GL_CONSTANT(RGBA4);
  JS_GL_CONSTANT(RGB5_A1);
  JS_GL_CONSTANT(RGBA8);
  JS_GL_CONSTANT(RGB10_A2);
  JS_GL_CONSTANT(RGBA12);
  JS_GL_CONSTANT(RGBA16);
  JS_GL_CONSTANT(TEXTURE_RED_SIZE);
  JS_GL_CONSTANT(TEXTURE_GREEN_SIZE);
  JS_GL_CONSTANT(TEXTURE_BLUE_SIZE);
  JS_GL_CONSTANT(TEXTURE_ALPHA_SIZE);
  JS_GL_CONSTANT(TEXTURE_LUMINANCE_SIZE);
  JS_GL_CONSTANT(TEXTURE_INTENSITY_SIZE);
  JS_GL_CONSTANT(PROXY_TEXTURE_1D);
  JS_GL_CONSTANT(PROXY_TEXTURE_2D);

  /* texture_object */
  JS_GL_CONSTANT(TEXTURE_PRIORITY);
  JS_GL_CONSTANT(TEXTURE_RESIDENT);
  JS_GL_CONSTANT(TEXTURE_BINDING_1D);
  JS_GL_CONSTANT(TEXTURE_BINDING_2D);

  /* vertex_array */
  JS_GL_CONSTANT(VERTEX_ARRAY);
  JS_GL_CONSTANT(NORMAL_ARRAY);
  JS_GL_CONSTANT(COLOR_ARRAY);
  JS_GL_CONSTANT(INDEX_ARRAY);
  JS_GL_CONSTANT(TEXTURE_COORD_ARRAY);
  JS_GL_CONSTANT(EDGE_FLAG_ARRAY);
  JS_GL_CONSTANT(VERTEX_ARRAY_SIZE);
  JS_GL_CONSTANT(VERTEX_ARRAY_TYPE);
  JS_GL_CONSTANT(VERTEX_ARRAY_STRIDE);
  JS_GL_CONSTANT(NORMAL_ARRAY_TYPE);
  JS_GL_CONSTANT(NORMAL_ARRAY_STRIDE);
  JS_GL_CONSTANT(COLOR_ARRAY_SIZE);
  JS_GL_CONSTANT(COLOR_ARRAY_TYPE);
  JS_GL_CONSTANT(COLOR_ARRAY_STRIDE);
  JS_GL_CONSTANT(INDEX_ARRAY_TYPE);
  JS_GL_CONSTANT(INDEX_ARRAY_STRIDE);
  JS_GL_CONSTANT(TEXTURE_COORD_ARRAY_SIZE);
  JS_GL_CONSTANT(TEXTURE_COORD_ARRAY_TYPE);
  JS_GL_CONSTANT(TEXTURE_COORD_ARRAY_STRIDE);
  JS_GL_CONSTANT(EDGE_FLAG_ARRAY_STRIDE);
  JS_GL_CONSTANT(VERTEX_ARRAY_POINTER);
  JS_GL_CONSTANT(NORMAL_ARRAY_POINTER);
  JS_GL_CONSTANT(COLOR_ARRAY_POINTER);
  JS_GL_CONSTANT(INDEX_ARRAY_POINTER);
  JS_GL_CONSTANT(TEXTURE_COORD_ARRAY_POINTER);
  JS_GL_CONSTANT(EDGE_FLAG_ARRAY_POINTER);
  JS_GL_CONSTANT(V2F);
  JS_GL_CONSTANT(V3F);
  JS_GL_CONSTANT(C4UB_V2F);
  JS_GL_CONSTANT(C4UB_V3F);
  JS_GL_CONSTANT(C3F_V3F);
  JS_GL_CONSTANT(N3F_V3F);
  JS_GL_CONSTANT(C4F_N3F_V3F);
  JS_GL_CONSTANT(T2F_V3F);
  JS_GL_CONSTANT(T4F_V4F);
  JS_GL_CONSTANT(T2F_C4UB_V3F);
  JS_GL_CONSTANT(T2F_C3F_V3F);
  JS_GL_CONSTANT(T2F_N3F_V3F);
  JS_GL_CONSTANT(T2F_C4F_N3F_V3F);
  JS_GL_CONSTANT(T4F_C4F_N3F_V4F);

  /* Extensions */
  JS_GL_CONSTANT(EXT_vertex_array);
  JS_GL_CONSTANT(EXT_bgra);
  JS_GL_CONSTANT(EXT_paletted_texture);
  JS_GL_CONSTANT(WIN_swap_hint);
  //JS_GL_CONSTANT(WIN_draw_range_elements);
  // JS_GL_CONSTANT(WIN_phong_shading);
  // JS_GL_CONSTANT(WIN_specular_fog);

  /* EXT_vertex_array */
  JS_GL_CONSTANT(VERTEX_ARRAY_EXT);
  JS_GL_CONSTANT(NORMAL_ARRAY_EXT);
  JS_GL_CONSTANT(COLOR_ARRAY_EXT);
  JS_GL_CONSTANT(INDEX_ARRAY_EXT);
  JS_GL_CONSTANT(TEXTURE_COORD_ARRAY_EXT);
  JS_GL_CONSTANT(EDGE_FLAG_ARRAY_EXT);
  JS_GL_CONSTANT(VERTEX_ARRAY_SIZE_EXT);
  JS_GL_CONSTANT(VERTEX_ARRAY_TYPE_EXT);
  JS_GL_CONSTANT(VERTEX_ARRAY_STRIDE_EXT);
  JS_GL_CONSTANT(VERTEX_ARRAY_COUNT_EXT);
  JS_GL_CONSTANT(NORMAL_ARRAY_TYPE_EXT);
  JS_GL_CONSTANT(NORMAL_ARRAY_STRIDE_EXT);
  JS_GL_CONSTANT(NORMAL_ARRAY_COUNT_EXT);
  JS_GL_CONSTANT(COLOR_ARRAY_SIZE_EXT);
  JS_GL_CONSTANT(COLOR_ARRAY_TYPE_EXT);
  JS_GL_CONSTANT(COLOR_ARRAY_STRIDE_EXT);
  JS_GL_CONSTANT(COLOR_ARRAY_COUNT_EXT);
  JS_GL_CONSTANT(INDEX_ARRAY_TYPE_EXT);
  JS_GL_CONSTANT(INDEX_ARRAY_STRIDE_EXT);
  JS_GL_CONSTANT(INDEX_ARRAY_COUNT_EXT);
  JS_GL_CONSTANT(TEXTURE_COORD_ARRAY_SIZE_EXT);
  JS_GL_CONSTANT(TEXTURE_COORD_ARRAY_TYPE_EXT);
  JS_GL_CONSTANT(TEXTURE_COORD_ARRAY_STRIDE_EXT);
  JS_GL_CONSTANT(TEXTURE_COORD_ARRAY_COUNT_EXT);
  JS_GL_CONSTANT(EDGE_FLAG_ARRAY_STRIDE_EXT);
  JS_GL_CONSTANT(EDGE_FLAG_ARRAY_COUNT_EXT);
  JS_GL_CONSTANT(VERTEX_ARRAY_POINTER_EXT);
  JS_GL_CONSTANT(NORMAL_ARRAY_POINTER_EXT);
  JS_GL_CONSTANT(COLOR_ARRAY_POINTER_EXT);
  JS_GL_CONSTANT(INDEX_ARRAY_POINTER_EXT);
  JS_GL_CONSTANT(TEXTURE_COORD_ARRAY_POINTER_EXT);
  JS_GL_CONSTANT(EDGE_FLAG_ARRAY_POINTER_EXT);
  JS_GL_CONSTANT(DOUBLE_EXT);

  /* EXT_bgra */
  JS_GL_CONSTANT(BGR_EXT);
  JS_GL_CONSTANT(BGRA_EXT);

  /* EXT_paletted_texture */

  /* These must match the GL_COLOR_TABLE_*_SGI enumerants */
  JS_GL_CONSTANT(COLOR_TABLE_FORMAT_EXT);
  JS_GL_CONSTANT(COLOR_TABLE_WIDTH_EXT);
  JS_GL_CONSTANT(COLOR_TABLE_RED_SIZE_EXT);
  JS_GL_CONSTANT(COLOR_TABLE_GREEN_SIZE_EXT);
  JS_GL_CONSTANT(COLOR_TABLE_BLUE_SIZE_EXT);
  JS_GL_CONSTANT(COLOR_TABLE_ALPHA_SIZE_EXT);
  JS_GL_CONSTANT(COLOR_TABLE_LUMINANCE_SIZE_EXT);
  JS_GL_CONSTANT(COLOR_TABLE_INTENSITY_SIZE_EXT);

  JS_GL_CONSTANT(COLOR_INDEX1_EXT);
  JS_GL_CONSTANT(COLOR_INDEX2_EXT);
  JS_GL_CONSTANT(COLOR_INDEX4_EXT);
  JS_GL_CONSTANT(COLOR_INDEX8_EXT);
  JS_GL_CONSTANT(COLOR_INDEX12_EXT);
  JS_GL_CONSTANT(COLOR_INDEX16_EXT);

  /* WIN_draw_range_elements */
  //JS_GL_CONSTANT(MAX_ELEMENTS_VERTICES_WIN);
  //JS_GL_CONSTANT(MAX_ELEMENTS_INDICES_WIN);

  /* WIN_phong_shading */
  JS_GL_CONSTANT(PHONG_WIN);
  JS_GL_CONSTANT(PHONG_HINT_WIN);

  /* WIN_specular_fog */
  JS_GL_CONSTANT(FOG_SPECULAR_TEXTURE_WIN);

  /* For compatibility with OpenGL v1.0 */
  JS_GL_CONSTANT(LOGIC_OP);
  JS_GL_CONSTANT(TEXTURE_COMPONENTS);


  JS_GLEW_CONSTANT(OK);

  /* ---------------------- GL_VERSION_2_0 --------------------- */
  JS_GL_CONSTANT(VERSION_2_0);
  JS_GL_CONSTANT(BLEND_EQUATION_RGB);
  JS_GL_CONSTANT(VERTEX_ATTRIB_ARRAY_ENABLED);
  JS_GL_CONSTANT(VERTEX_ATTRIB_ARRAY_SIZE);
  JS_GL_CONSTANT(VERTEX_ATTRIB_ARRAY_STRIDE);
  JS_GL_CONSTANT(VERTEX_ATTRIB_ARRAY_TYPE);
  JS_GL_CONSTANT(CURRENT_VERTEX_ATTRIB);
  JS_GL_CONSTANT(VERTEX_PROGRAM_POINT_SIZE);
  JS_GL_CONSTANT(VERTEX_PROGRAM_TWO_SIDE);
  JS_GL_CONSTANT(VERTEX_ATTRIB_ARRAY_POINTER);
  JS_GL_CONSTANT(STENCIL_BACK_FUNC);
  JS_GL_CONSTANT(STENCIL_BACK_FAIL);
  JS_GL_CONSTANT(STENCIL_BACK_PASS_DEPTH_FAIL);
  JS_GL_CONSTANT(STENCIL_BACK_PASS_DEPTH_PASS);
  JS_GL_CONSTANT(MAX_DRAW_BUFFERS);
  JS_GL_CONSTANT(DRAW_BUFFER0);
  JS_GL_CONSTANT(DRAW_BUFFER1);
  JS_GL_CONSTANT(DRAW_BUFFER2);
  JS_GL_CONSTANT(DRAW_BUFFER3);
  JS_GL_CONSTANT(DRAW_BUFFER4);
  JS_GL_CONSTANT(DRAW_BUFFER5);
  JS_GL_CONSTANT(DRAW_BUFFER6);
  JS_GL_CONSTANT(DRAW_BUFFER7);
  JS_GL_CONSTANT(DRAW_BUFFER8);
  JS_GL_CONSTANT(DRAW_BUFFER9);
  JS_GL_CONSTANT(DRAW_BUFFER10);
  JS_GL_CONSTANT(DRAW_BUFFER11);
  JS_GL_CONSTANT(DRAW_BUFFER12);
  JS_GL_CONSTANT(DRAW_BUFFER13);
  JS_GL_CONSTANT(DRAW_BUFFER14);
  JS_GL_CONSTANT(DRAW_BUFFER15);
  JS_GL_CONSTANT(BLEND_EQUATION_ALPHA);
  JS_GL_CONSTANT(POINT_SPRITE);
  JS_GL_CONSTANT(COORD_REPLACE);
  JS_GL_CONSTANT(MAX_VERTEX_ATTRIBS);
  JS_GL_CONSTANT(VERTEX_ATTRIB_ARRAY_NORMALIZED);
  JS_GL_CONSTANT(MAX_TEXTURE_COORDS);
  JS_GL_CONSTANT(MAX_TEXTURE_IMAGE_UNITS);
  JS_GL_CONSTANT(FRAGMENT_SHADER);
  JS_GL_CONSTANT(VERTEX_SHADER);
  JS_GL_CONSTANT(MAX_FRAGMENT_UNIFORM_COMPONENTS);
  JS_GL_CONSTANT(MAX_VERTEX_UNIFORM_COMPONENTS);
  JS_GL_CONSTANT(MAX_VARYING_FLOATS);
  JS_GL_CONSTANT(MAX_VERTEX_TEXTURE_IMAGE_UNITS);
  JS_GL_CONSTANT(MAX_COMBINED_TEXTURE_IMAGE_UNITS);
  JS_GL_CONSTANT(SHADER_TYPE);
  JS_GL_CONSTANT(FLOAT_VEC2);
  JS_GL_CONSTANT(FLOAT_VEC3);
  JS_GL_CONSTANT(FLOAT_VEC4);
  JS_GL_CONSTANT(INT_VEC2);
  JS_GL_CONSTANT(INT_VEC3);
  JS_GL_CONSTANT(INT_VEC4);
  JS_GL_CONSTANT(BOOL);
  JS_GL_CONSTANT(BOOL_VEC2);
  JS_GL_CONSTANT(BOOL_VEC3);
  JS_GL_CONSTANT(BOOL_VEC4);
  JS_GL_CONSTANT(FLOAT_MAT2);
  JS_GL_CONSTANT(FLOAT_MAT3);
  JS_GL_CONSTANT(FLOAT_MAT4);
  JS_GL_CONSTANT(SAMPLER_1D);
  JS_GL_CONSTANT(SAMPLER_2D);
  JS_GL_CONSTANT(SAMPLER_3D);
  JS_GL_CONSTANT(SAMPLER_CUBE);
  JS_GL_CONSTANT(SAMPLER_1D_SHADOW);
  JS_GL_CONSTANT(SAMPLER_2D_SHADOW);
  JS_GL_CONSTANT(DELETE_STATUS);
  JS_GL_CONSTANT(COMPILE_STATUS);
  JS_GL_CONSTANT(LINK_STATUS);
  JS_GL_CONSTANT(VALIDATE_STATUS);
  JS_GL_CONSTANT(INFO_LOG_LENGTH);
  JS_GL_CONSTANT(ATTACHED_SHADERS);
  JS_GL_CONSTANT(ACTIVE_UNIFORMS);
  JS_GL_CONSTANT(ACTIVE_UNIFORM_MAX_LENGTH);
  JS_GL_CONSTANT(SHADER_SOURCE_LENGTH);
  JS_GL_CONSTANT(ACTIVE_ATTRIBUTES);
  JS_GL_CONSTANT(ACTIVE_ATTRIBUTE_MAX_LENGTH);
  JS_GL_CONSTANT(FRAGMENT_SHADER_DERIVATIVE_HINT);
  JS_GL_CONSTANT(SHADING_LANGUAGE_VERSION);
  JS_GL_CONSTANT(CURRENT_PROGRAM);
  JS_GL_CONSTANT(POINT_SPRITE_COORD_ORIGIN);
  JS_GL_CONSTANT(LOWER_LEFT);
  JS_GL_CONSTANT(UPPER_LEFT);
  JS_GL_CONSTANT(STENCIL_BACK_REF);
  JS_GL_CONSTANT(STENCIL_BACK_VALUE_MASK);
  JS_GL_CONSTANT(STENCIL_BACK_WRITEMASK);



  /* ---------------------- GL_ARB_internalformat_query2 --------------------- */
  JS_GL_CONSTANT(ARB_internalformat_query2);
  JS_GL_CONSTANT(INTERNALFORMAT_SUPPORTED);
  JS_GL_CONSTANT(INTERNALFORMAT_PREFERRED);
  JS_GL_CONSTANT(INTERNALFORMAT_RED_SIZE);
  JS_GL_CONSTANT(INTERNALFORMAT_GREEN_SIZE);
  JS_GL_CONSTANT(INTERNALFORMAT_BLUE_SIZE);
  JS_GL_CONSTANT(INTERNALFORMAT_ALPHA_SIZE);
  JS_GL_CONSTANT(INTERNALFORMAT_DEPTH_SIZE);
  JS_GL_CONSTANT(INTERNALFORMAT_STENCIL_SIZE);
  JS_GL_CONSTANT(INTERNALFORMAT_SHARED_SIZE);
  JS_GL_CONSTANT(INTERNALFORMAT_RED_TYPE);
  JS_GL_CONSTANT(INTERNALFORMAT_GREEN_TYPE);
  JS_GL_CONSTANT(INTERNALFORMAT_BLUE_TYPE);
  JS_GL_CONSTANT(INTERNALFORMAT_ALPHA_TYPE);
  JS_GL_CONSTANT(INTERNALFORMAT_DEPTH_TYPE);
  JS_GL_CONSTANT(INTERNALFORMAT_STENCIL_TYPE);
  JS_GL_CONSTANT(MAX_WIDTH);
  JS_GL_CONSTANT(MAX_HEIGHT);
  JS_GL_CONSTANT(MAX_DEPTH);
  JS_GL_CONSTANT(MAX_LAYERS);
  JS_GL_CONSTANT(MAX_COMBINED_DIMENSIONS);
  JS_GL_CONSTANT(COLOR_COMPONENTS);
  JS_GL_CONSTANT(DEPTH_COMPONENTS);
  JS_GL_CONSTANT(STENCIL_COMPONENTS);
  JS_GL_CONSTANT(COLOR_RENDERABLE);
  JS_GL_CONSTANT(DEPTH_RENDERABLE);
  JS_GL_CONSTANT(STENCIL_RENDERABLE);
  JS_GL_CONSTANT(FRAMEBUFFER_RENDERABLE);
  JS_GL_CONSTANT(FRAMEBUFFER_RENDERABLE_LAYERED);
  JS_GL_CONSTANT(FRAMEBUFFER_BLEND);
  JS_GL_CONSTANT(READ_PIXELS);
  JS_GL_CONSTANT(READ_PIXELS_FORMAT);
  JS_GL_CONSTANT(READ_PIXELS_TYPE);
  JS_GL_CONSTANT(TEXTURE_IMAGE_FORMAT);
  JS_GL_CONSTANT(TEXTURE_IMAGE_TYPE);
  JS_GL_CONSTANT(GET_TEXTURE_IMAGE_FORMAT);
  JS_GL_CONSTANT(GET_TEXTURE_IMAGE_TYPE);
  JS_GL_CONSTANT(MIPMAP);
  JS_GL_CONSTANT(MANUAL_GENERATE_MIPMAP);
  JS_GL_CONSTANT(AUTO_GENERATE_MIPMAP);
  JS_GL_CONSTANT(COLOR_ENCODING);
  JS_GL_CONSTANT(SRGB_READ);
  JS_GL_CONSTANT(SRGB_WRITE);
  JS_GL_CONSTANT(SRGB_DECODE_ARB);
  JS_GL_CONSTANT(FILTER);
  JS_GL_CONSTANT(VERTEX_TEXTURE);
  JS_GL_CONSTANT(TESS_CONTROL_TEXTURE);
  JS_GL_CONSTANT(TESS_EVALUATION_TEXTURE);
  JS_GL_CONSTANT(GEOMETRY_TEXTURE);
  JS_GL_CONSTANT(FRAGMENT_TEXTURE);
  JS_GL_CONSTANT(COMPUTE_TEXTURE);
  JS_GL_CONSTANT(TEXTURE_SHADOW);
  JS_GL_CONSTANT(TEXTURE_GATHER);
  JS_GL_CONSTANT(TEXTURE_GATHER_SHADOW);
  JS_GL_CONSTANT(SHADER_IMAGE_LOAD);
  JS_GL_CONSTANT(SHADER_IMAGE_STORE);
  JS_GL_CONSTANT(SHADER_IMAGE_ATOMIC);
  JS_GL_CONSTANT(IMAGE_TEXEL_SIZE);
  JS_GL_CONSTANT(IMAGE_COMPATIBILITY_CLASS);
  JS_GL_CONSTANT(IMAGE_PIXEL_FORMAT);
  JS_GL_CONSTANT(IMAGE_PIXEL_TYPE);
  JS_GL_CONSTANT(SIMULTANEOUS_TEXTURE_AND_DEPTH_TEST);
  JS_GL_CONSTANT(SIMULTANEOUS_TEXTURE_AND_STENCIL_TEST);
  JS_GL_CONSTANT(SIMULTANEOUS_TEXTURE_AND_DEPTH_WRITE);
  JS_GL_CONSTANT(SIMULTANEOUS_TEXTURE_AND_STENCIL_WRITE);
  JS_GL_CONSTANT(TEXTURE_COMPRESSED_BLOCK_WIDTH);
  JS_GL_CONSTANT(TEXTURE_COMPRESSED_BLOCK_HEIGHT);
  JS_GL_CONSTANT(TEXTURE_COMPRESSED_BLOCK_SIZE);
  JS_GL_CONSTANT(CLEAR_BUFFER);
  JS_GL_CONSTANT(TEXTURE_VIEW);
  JS_GL_CONSTANT(VIEW_COMPATIBILITY_CLASS);
  JS_GL_CONSTANT(FULL_SUPPORT);
  JS_GL_CONSTANT(CAVEAT_SUPPORT);
  JS_GL_CONSTANT(IMAGE_CLASS_4_X_32);
  JS_GL_CONSTANT(IMAGE_CLASS_2_X_32);
  JS_GL_CONSTANT(IMAGE_CLASS_1_X_32);
  JS_GL_CONSTANT(IMAGE_CLASS_4_X_16);
  JS_GL_CONSTANT(IMAGE_CLASS_2_X_16);
  JS_GL_CONSTANT(IMAGE_CLASS_1_X_16);
  JS_GL_CONSTANT(IMAGE_CLASS_4_X_8);
  JS_GL_CONSTANT(IMAGE_CLASS_2_X_8);
  JS_GL_CONSTANT(IMAGE_CLASS_1_X_8);
  JS_GL_CONSTANT(IMAGE_CLASS_11_11_10);
  JS_GL_CONSTANT(IMAGE_CLASS_10_10_10_2);
  JS_GL_CONSTANT(VIEW_CLASS_128_BITS);
  JS_GL_CONSTANT(VIEW_CLASS_96_BITS);
  JS_GL_CONSTANT(VIEW_CLASS_64_BITS);
  JS_GL_CONSTANT(VIEW_CLASS_48_BITS);
  JS_GL_CONSTANT(VIEW_CLASS_32_BITS);
  JS_GL_CONSTANT(VIEW_CLASS_24_BITS);
  JS_GL_CONSTANT(VIEW_CLASS_16_BITS);
  JS_GL_CONSTANT(VIEW_CLASS_8_BITS);
  JS_GL_CONSTANT(VIEW_CLASS_S3TC_DXT1_RGB);
  JS_GL_CONSTANT(VIEW_CLASS_S3TC_DXT1_RGBA);
  JS_GL_CONSTANT(VIEW_CLASS_S3TC_DXT3_RGBA);
  JS_GL_CONSTANT(VIEW_CLASS_S3TC_DXT5_RGBA);
  JS_GL_CONSTANT(VIEW_CLASS_RGTC1_RED);
  JS_GL_CONSTANT(VIEW_CLASS_RGTC2_RG);
  JS_GL_CONSTANT(VIEW_CLASS_BPTC_UNORM);
  JS_GL_CONSTANT(VIEW_CLASS_BPTC_FLOAT);

  JS_GL_CONSTANT(ARRAY_BUFFER);
  JS_GL_CONSTANT(STATIC_DRAW);

  // METHODS
  JS_GL_SET_METHOD(init);
  JS_GL_SET_METHOD(accum);
  JS_GL_SET_METHOD(alphaFunc);
  JS_GL_SET_METHOD(areTexturesResident);
  JS_GL_SET_METHOD(arrayElement);
  JS_GL_SET_METHOD(begin);
  JS_GL_SET_METHOD(bindTexture);
  JS_GL_SET_METHOD(bitmap);
  JS_GL_SET_METHOD(blendFunc);
  JS_GL_SET_METHOD(callList);
  JS_GL_SET_METHOD(callLists);
  JS_GL_SET_METHOD(clear);
  JS_GL_SET_METHOD(clearAccum);
  JS_GL_SET_METHOD(clearColor);
  JS_GL_SET_METHOD(clearDepth);
  JS_GL_SET_METHOD(clearIndex);
  JS_GL_SET_METHOD(clearStencil);
  JS_GL_SET_METHOD(clipPlane);
  JS_GL_SET_METHOD(color3b);
  JS_GL_SET_METHOD(color3bv);
  JS_GL_SET_METHOD(color3d);
  JS_GL_SET_METHOD(color3dv);
  JS_GL_SET_METHOD(color3f);
  JS_GL_SET_METHOD(color3fv);
  JS_GL_SET_METHOD(color3i);
  JS_GL_SET_METHOD(color3iv);
  JS_GL_SET_METHOD(color3s);
  JS_GL_SET_METHOD(color3sv);
  JS_GL_SET_METHOD(color3ub);
  JS_GL_SET_METHOD(color3ubv);
  JS_GL_SET_METHOD(color3ui);
  JS_GL_SET_METHOD(color3uiv);
  JS_GL_SET_METHOD(color3us);
  JS_GL_SET_METHOD(color3usv);
  JS_GL_SET_METHOD(color4b);
  JS_GL_SET_METHOD(color4bv);
  JS_GL_SET_METHOD(color4d);
  JS_GL_SET_METHOD(color4dv);
  JS_GL_SET_METHOD(color4f);
  JS_GL_SET_METHOD(color4fv);
  JS_GL_SET_METHOD(color4i);
  JS_GL_SET_METHOD(color4iv);
  JS_GL_SET_METHOD(color4s);
  JS_GL_SET_METHOD(color4sv);
  JS_GL_SET_METHOD(color4ub);
  JS_GL_SET_METHOD(color4ubv);
  JS_GL_SET_METHOD(color4ui);
  JS_GL_SET_METHOD(color4uiv);
  JS_GL_SET_METHOD(color4us);
  JS_GL_SET_METHOD(color4usv);
  JS_GL_SET_METHOD(colorMask);
  JS_GL_SET_METHOD(colorMaterial);
  JS_GL_SET_METHOD(colorPointer);
  JS_GL_SET_METHOD(copyPixels);
  JS_GL_SET_METHOD(copyTexImage1D);
  JS_GL_SET_METHOD(copyTexImage2D);
  JS_GL_SET_METHOD(copyTexSubImage1D);
  JS_GL_SET_METHOD(copyTexSubImage2D);
  JS_GL_SET_METHOD(cullFace);
  JS_GL_SET_METHOD(deleteLists);
  JS_GL_SET_METHOD(deleteTextures);
  JS_GL_SET_METHOD(depthFunc);
  JS_GL_SET_METHOD(depthMask);
  JS_GL_SET_METHOD(depthRange);
  JS_GL_SET_METHOD(disable);
  JS_GL_SET_METHOD(disableClientState);
  JS_GL_SET_METHOD(drawArrays);
  JS_GL_SET_METHOD(drawBuffer);
  JS_GL_SET_METHOD(drawElements);
  JS_GL_SET_METHOD(drawPixels);
  JS_GL_SET_METHOD(edgeFlag);
  JS_GL_SET_METHOD(edgeFlagPointer);
  JS_GL_SET_METHOD(edgeFlagv);
  JS_GL_SET_METHOD(enable);
  JS_GL_SET_METHOD(enableClientState);
  JS_GL_SET_METHOD(end);
  JS_GL_SET_METHOD(endList);
  JS_GL_SET_METHOD(evalCoord1d);
  JS_GL_SET_METHOD(evalCoord1dv);
  JS_GL_SET_METHOD(evalCoord1f);
  JS_GL_SET_METHOD(evalCoord1fv);
  JS_GL_SET_METHOD(evalCoord2d);
  JS_GL_SET_METHOD(evalCoord2dv);
  JS_GL_SET_METHOD(evalCoord2f);
  JS_GL_SET_METHOD(evalCoord2fv);
  JS_GL_SET_METHOD(evalMesh1);
  JS_GL_SET_METHOD(evalMesh2);
  JS_GL_SET_METHOD(evalPoint1);
  JS_GL_SET_METHOD(evalPoint2);
  JS_GL_SET_METHOD(feedbackBuffer);
  JS_GL_SET_METHOD(finish);
  JS_GL_SET_METHOD(flush);
  JS_GL_SET_METHOD(fogf);
  JS_GL_SET_METHOD(fogfv);
  JS_GL_SET_METHOD(fogi);
  JS_GL_SET_METHOD(fogiv);
  JS_GL_SET_METHOD(frontFace);
  JS_GL_SET_METHOD(frustum);
  JS_GL_SET_METHOD(genLists);
  JS_GL_SET_METHOD(genTextures);
  JS_GL_SET_METHOD(getBooleanv);
  JS_GL_SET_METHOD(getClipPlane);
  JS_GL_SET_METHOD(getDoublev);
  JS_GL_SET_METHOD(getError);
  JS_GL_SET_METHOD(getFloatv);
  JS_GL_SET_METHOD(getIntegerv);
  JS_GL_SET_METHOD(getLightfv);
  JS_GL_SET_METHOD(getLightiv);
  JS_GL_SET_METHOD(getMapdv);
  JS_GL_SET_METHOD(getMapfv);
  JS_GL_SET_METHOD(getMapiv);
  JS_GL_SET_METHOD(getMaterialfv);
  JS_GL_SET_METHOD(getMaterialiv);
  JS_GL_SET_METHOD(getPixelMapfv);
  JS_GL_SET_METHOD(getPixelMapuiv);
  JS_GL_SET_METHOD(getPixelMapusv);
  JS_GL_SET_METHOD(getPointerv);
  JS_GL_SET_METHOD(getPolygonStipple);
  JS_GL_SET_METHOD(getString);
  JS_GL_SET_METHOD(getTexEnvfv);
  JS_GL_SET_METHOD(getTexEnviv);
  JS_GL_SET_METHOD(getTexGendv);
  JS_GL_SET_METHOD(getTexGenfv);
  JS_GL_SET_METHOD(getTexGeniv);
  JS_GL_SET_METHOD(getTexImage);
  JS_GL_SET_METHOD(getTexLevelParameterfv);
  JS_GL_SET_METHOD(getTexLevelParameteriv);
  JS_GL_SET_METHOD(getTexParameterfv);
  JS_GL_SET_METHOD(getTexParameteriv);
  JS_GL_SET_METHOD(hint);
  JS_GL_SET_METHOD(indexMask);
  JS_GL_SET_METHOD(indexPointer);
  JS_GL_SET_METHOD(indexd);
  JS_GL_SET_METHOD(indexdv);
  JS_GL_SET_METHOD(indexf);
  JS_GL_SET_METHOD(indexfv);
  JS_GL_SET_METHOD(indexi);
  JS_GL_SET_METHOD(indexiv);
  JS_GL_SET_METHOD(indexs);
  JS_GL_SET_METHOD(indexsv);
  JS_GL_SET_METHOD(indexub);
  JS_GL_SET_METHOD(indexubv);
  JS_GL_SET_METHOD(initNames);
  JS_GL_SET_METHOD(interleavedArrays);
  JS_GL_SET_METHOD(isEnabled);
  JS_GL_SET_METHOD(isList);
  JS_GL_SET_METHOD(isTexture);
  JS_GL_SET_METHOD(lightModelf);
  JS_GL_SET_METHOD(lightModelfv);
  JS_GL_SET_METHOD(lightModeli);
  JS_GL_SET_METHOD(lightModeliv);
  JS_GL_SET_METHOD(lightf);
  JS_GL_SET_METHOD(lightfv);
  JS_GL_SET_METHOD(lighti);
  JS_GL_SET_METHOD(lightiv);
  JS_GL_SET_METHOD(lineStipple);
  JS_GL_SET_METHOD(lineWidth);
  JS_GL_SET_METHOD(listBase);
  JS_GL_SET_METHOD(loadIdentity);
  JS_GL_SET_METHOD(loadMatrixd);
  JS_GL_SET_METHOD(loadMatrixf);
  JS_GL_SET_METHOD(loadName);
  JS_GL_SET_METHOD(logicOp);
  JS_GL_SET_METHOD(map1d);
  JS_GL_SET_METHOD(map1f);
  JS_GL_SET_METHOD(map2d);
  JS_GL_SET_METHOD(map2f);
  JS_GL_SET_METHOD(mapGrid1d);
  JS_GL_SET_METHOD(mapGrid1f);
  JS_GL_SET_METHOD(mapGrid2d);
  JS_GL_SET_METHOD(mapGrid2f);
  JS_GL_SET_METHOD(materialf);
  JS_GL_SET_METHOD(materialfv);
  JS_GL_SET_METHOD(materiali);
  JS_GL_SET_METHOD(materialiv);
  JS_GL_SET_METHOD(matrixMode);
  JS_GL_SET_METHOD(multMatrixd);
  JS_GL_SET_METHOD(multMatrixf);
  JS_GL_SET_METHOD(newList);
  JS_GL_SET_METHOD(normal3b);
  JS_GL_SET_METHOD(normal3bv);
  JS_GL_SET_METHOD(normal3d);
  JS_GL_SET_METHOD(normal3dv);
  JS_GL_SET_METHOD(normal3f);
  JS_GL_SET_METHOD(normal3fv);
  JS_GL_SET_METHOD(normal3i);
  JS_GL_SET_METHOD(normal3iv);
  JS_GL_SET_METHOD(normal3s);
  JS_GL_SET_METHOD(normal3sv);
  JS_GL_SET_METHOD(normalPointer);
  JS_GL_SET_METHOD(ortho);
  JS_GL_SET_METHOD(passThrough);
  JS_GL_SET_METHOD(pixelMapfv);
  JS_GL_SET_METHOD(pixelMapuiv);
  JS_GL_SET_METHOD(pixelMapusv);
  JS_GL_SET_METHOD(pixelStoref);
  JS_GL_SET_METHOD(pixelStorei);
  JS_GL_SET_METHOD(pixelTransferf);
  JS_GL_SET_METHOD(pixelTransferi);
  JS_GL_SET_METHOD(pixelZoom);
  JS_GL_SET_METHOD(pointSize);
  JS_GL_SET_METHOD(polygonMode);
  JS_GL_SET_METHOD(polygonOffset);
  JS_GL_SET_METHOD(polygonStipple);
  JS_GL_SET_METHOD(popAttrib);
  JS_GL_SET_METHOD(popClientAttrib);
  JS_GL_SET_METHOD(popMatrix);
  JS_GL_SET_METHOD(popName);
  JS_GL_SET_METHOD(prioritizeTextures);
  JS_GL_SET_METHOD(pushAttrib);
  JS_GL_SET_METHOD(pushClientAttrib);
  JS_GL_SET_METHOD(pushMatrix);
  JS_GL_SET_METHOD(pushName);
  JS_GL_SET_METHOD(rasterPos2d);
  JS_GL_SET_METHOD(rasterPos2dv);
  JS_GL_SET_METHOD(rasterPos2f);
  JS_GL_SET_METHOD(rasterPos2fv);
  JS_GL_SET_METHOD(rasterPos2i);
  JS_GL_SET_METHOD(rasterPos2iv);
  JS_GL_SET_METHOD(rasterPos2s);
  JS_GL_SET_METHOD(rasterPos2sv);
  JS_GL_SET_METHOD(rasterPos3d);
  JS_GL_SET_METHOD(rasterPos3dv);
  JS_GL_SET_METHOD(rasterPos3f);
  JS_GL_SET_METHOD(rasterPos3fv);
  JS_GL_SET_METHOD(rasterPos3i);
  JS_GL_SET_METHOD(rasterPos3iv);
  JS_GL_SET_METHOD(rasterPos3s);
  JS_GL_SET_METHOD(rasterPos3sv);
  JS_GL_SET_METHOD(rasterPos4d);
  JS_GL_SET_METHOD(rasterPos4dv);
  JS_GL_SET_METHOD(rasterPos4f);
  JS_GL_SET_METHOD(rasterPos4fv);
  JS_GL_SET_METHOD(rasterPos4i);
  JS_GL_SET_METHOD(rasterPos4iv);
  JS_GL_SET_METHOD(rasterPos4s);
  JS_GL_SET_METHOD(rasterPos4sv);
  JS_GL_SET_METHOD(readBuffer);
  JS_GL_SET_METHOD(readPixels);
  JS_GL_SET_METHOD(rectd);
  JS_GL_SET_METHOD(rectdv);
  JS_GL_SET_METHOD(rectf);
  JS_GL_SET_METHOD(rectfv);
  JS_GL_SET_METHOD(recti);
  JS_GL_SET_METHOD(rectiv);
  JS_GL_SET_METHOD(rects);
  JS_GL_SET_METHOD(rectsv);
  JS_GL_SET_METHOD(renderMode);
  JS_GL_SET_METHOD(rotated);
  JS_GL_SET_METHOD(rotatef);
  JS_GL_SET_METHOD(scaled);
  JS_GL_SET_METHOD(scalef);
  JS_GL_SET_METHOD(scissor);
  JS_GL_SET_METHOD(selectBuffer);
  JS_GL_SET_METHOD(shadeModel);
  JS_GL_SET_METHOD(stencilFunc);
  JS_GL_SET_METHOD(stencilMask);
  JS_GL_SET_METHOD(stencilOp);
  JS_GL_SET_METHOD(texCoord1d);
  JS_GL_SET_METHOD(texCoord1dv);
  JS_GL_SET_METHOD(texCoord1f);
  JS_GL_SET_METHOD(texCoord1fv);
  JS_GL_SET_METHOD(texCoord1i);
  JS_GL_SET_METHOD(texCoord1iv);
  JS_GL_SET_METHOD(texCoord1s);
  JS_GL_SET_METHOD(texCoord1sv);
  JS_GL_SET_METHOD(texCoord2d);
  JS_GL_SET_METHOD(texCoord2dv);
  JS_GL_SET_METHOD(texCoord2f);
  JS_GL_SET_METHOD(texCoord2fv);
  JS_GL_SET_METHOD(texCoord2i);
  JS_GL_SET_METHOD(texCoord2iv);
  JS_GL_SET_METHOD(texCoord2s);
  JS_GL_SET_METHOD(texCoord2sv);
  JS_GL_SET_METHOD(texCoord3d);
  JS_GL_SET_METHOD(texCoord3dv);
  JS_GL_SET_METHOD(texCoord3f);
  JS_GL_SET_METHOD(texCoord3fv);
  JS_GL_SET_METHOD(texCoord3i);
  JS_GL_SET_METHOD(texCoord3iv);
  JS_GL_SET_METHOD(texCoord3s);
  JS_GL_SET_METHOD(texCoord3sv);
  JS_GL_SET_METHOD(texCoord4d);
  JS_GL_SET_METHOD(texCoord4dv);
  JS_GL_SET_METHOD(texCoord4f);
  JS_GL_SET_METHOD(texCoord4fv);
  JS_GL_SET_METHOD(texCoord4i);
  JS_GL_SET_METHOD(texCoord4iv);
  JS_GL_SET_METHOD(texCoord4s);
  JS_GL_SET_METHOD(texCoord4sv);
  JS_GL_SET_METHOD(texCoordPointer);
  JS_GL_SET_METHOD(texEnvf);
  JS_GL_SET_METHOD(texEnvfv);
  JS_GL_SET_METHOD(texEnvi);
  JS_GL_SET_METHOD(texEnviv);
  JS_GL_SET_METHOD(texGend);
  JS_GL_SET_METHOD(texGendv);
  JS_GL_SET_METHOD(texGenf);
  JS_GL_SET_METHOD(texGenfv);
  JS_GL_SET_METHOD(texGeni);
  JS_GL_SET_METHOD(texGeniv);
  JS_GL_SET_METHOD(texImage1D);
  JS_GL_SET_METHOD(texImage2D);
  JS_GL_SET_METHOD(texParameterf);
  JS_GL_SET_METHOD(texParameterfv);
  JS_GL_SET_METHOD(texParameteri);
  JS_GL_SET_METHOD(texParameteriv);
  JS_GL_SET_METHOD(texSubImage1D);
  JS_GL_SET_METHOD(texSubImage2D);
  JS_GL_SET_METHOD(translated);
  JS_GL_SET_METHOD(translatef);
  JS_GL_SET_METHOD(vertex2d);
  JS_GL_SET_METHOD(vertex2dv);
  JS_GL_SET_METHOD(vertex2f);
  JS_GL_SET_METHOD(vertex2fv);
  JS_GL_SET_METHOD(vertex2i);
  JS_GL_SET_METHOD(vertex2iv);
  JS_GL_SET_METHOD(vertex2s);
  JS_GL_SET_METHOD(vertex2sv);
  JS_GL_SET_METHOD(vertex3d);
  JS_GL_SET_METHOD(vertex3dv);
  JS_GL_SET_METHOD(vertex3f);
  JS_GL_SET_METHOD(vertex3fv);
  JS_GL_SET_METHOD(vertex3i);
  JS_GL_SET_METHOD(vertex3iv);
  JS_GL_SET_METHOD(vertex3s);
  JS_GL_SET_METHOD(vertex3sv);
  JS_GL_SET_METHOD(vertex4d);
  JS_GL_SET_METHOD(vertex4dv);
  JS_GL_SET_METHOD(vertex4f);
  JS_GL_SET_METHOD(vertex4fv);
  JS_GL_SET_METHOD(vertex4i);
  JS_GL_SET_METHOD(vertex4iv);
  JS_GL_SET_METHOD(vertex4s);
  JS_GL_SET_METHOD(vertex4sv);
  JS_GL_SET_METHOD(vertexPointer);
  JS_GL_SET_METHOD(viewport);

  //GLEW
  JS_GL_SET_METHOD(isSupported);

  //GL_VERSION_1_2
  JS_GL_SET_METHOD(copyTexSubImage3D);
  JS_GL_SET_METHOD(drawRangeElements);
  JS_GL_SET_METHOD(texImage3D);
  JS_GL_SET_METHOD(texSubImage3D);

  //GL_VERSION_1_3
  JS_GL_SET_METHOD(activeTexture);
  JS_GL_SET_METHOD(clientActiveTexture);
  JS_GL_SET_METHOD(compressedTexImage1D);
  JS_GL_SET_METHOD(compressedTexImage2D);
  JS_GL_SET_METHOD(compressedTexImage3D);
  JS_GL_SET_METHOD(compressedTexSubImage1D);
  JS_GL_SET_METHOD(compressedTexSubImage2D);
  JS_GL_SET_METHOD(compressedTexSubImage3D);
  JS_GL_SET_METHOD(getCompressedTexImage);
  JS_GL_SET_METHOD(loadTransposeMatrixd);
  JS_GL_SET_METHOD(loadTransposeMatrixf);
  JS_GL_SET_METHOD(multTransposeMatrixd);
  JS_GL_SET_METHOD(multTransposeMatrixf);
  JS_GL_SET_METHOD(multiTexCoord1d);
  JS_GL_SET_METHOD(multiTexCoord1dv);
  JS_GL_SET_METHOD(multiTexCoord1f);
  JS_GL_SET_METHOD(multiTexCoord1fv);
  JS_GL_SET_METHOD(multiTexCoord1i);
  JS_GL_SET_METHOD(multiTexCoord1iv);
  JS_GL_SET_METHOD(multiTexCoord1s);
  JS_GL_SET_METHOD(multiTexCoord1sv);
  JS_GL_SET_METHOD(multiTexCoord2d);
  JS_GL_SET_METHOD(multiTexCoord2dv);
  JS_GL_SET_METHOD(multiTexCoord2f);
  JS_GL_SET_METHOD(multiTexCoord2fv);
  JS_GL_SET_METHOD(multiTexCoord2i);
  JS_GL_SET_METHOD(multiTexCoord2iv);
  JS_GL_SET_METHOD(multiTexCoord2s);
  JS_GL_SET_METHOD(multiTexCoord2sv);
  JS_GL_SET_METHOD(multiTexCoord3d);
  JS_GL_SET_METHOD(multiTexCoord3dv);
  JS_GL_SET_METHOD(multiTexCoord3f);
  JS_GL_SET_METHOD(multiTexCoord3fv);
  JS_GL_SET_METHOD(multiTexCoord3i);
  JS_GL_SET_METHOD(multiTexCoord3iv);
  JS_GL_SET_METHOD(multiTexCoord3s);
  JS_GL_SET_METHOD(multiTexCoord3sv);
  JS_GL_SET_METHOD(multiTexCoord4d);
  JS_GL_SET_METHOD(multiTexCoord4dv);
  JS_GL_SET_METHOD(multiTexCoord4f);
  JS_GL_SET_METHOD(multiTexCoord4fv);
  JS_GL_SET_METHOD(multiTexCoord4i);
  JS_GL_SET_METHOD(multiTexCoord4iv);
  JS_GL_SET_METHOD(multiTexCoord4s);
  JS_GL_SET_METHOD(multiTexCoord4sv);
  JS_GL_SET_METHOD(sampleCoverage);

  //GL_VERSION_1_4
  JS_GL_SET_METHOD(blendColor);
  JS_GL_SET_METHOD(blendEquation);
  JS_GL_SET_METHOD(blendFuncSeparate);
  JS_GL_SET_METHOD(fogCoordPointer);
  JS_GL_SET_METHOD(fogCoordd);
  JS_GL_SET_METHOD(fogCoorddv);
  JS_GL_SET_METHOD(fogCoordf);
  JS_GL_SET_METHOD(fogCoordfv);
  JS_GL_SET_METHOD(multiDrawArrays);
  JS_GL_SET_METHOD(multiDrawElements);
  JS_GL_SET_METHOD(pointParameterf);
  JS_GL_SET_METHOD(pointParameterfv);
  JS_GL_SET_METHOD(pointParameteri);
  JS_GL_SET_METHOD(pointParameteriv);
  JS_GL_SET_METHOD(secondaryColor3b);
  JS_GL_SET_METHOD(secondaryColor3bv);
  JS_GL_SET_METHOD(secondaryColor3d);
  JS_GL_SET_METHOD(secondaryColor3dv);
  JS_GL_SET_METHOD(secondaryColor3f);
  JS_GL_SET_METHOD(secondaryColor3fv);
  JS_GL_SET_METHOD(secondaryColor3i);
  JS_GL_SET_METHOD(secondaryColor3iv);
  JS_GL_SET_METHOD(secondaryColor3s);
  JS_GL_SET_METHOD(secondaryColor3sv);
  JS_GL_SET_METHOD(secondaryColor3ub);
  JS_GL_SET_METHOD(secondaryColor3ubv);
  JS_GL_SET_METHOD(secondaryColor3ui);
  JS_GL_SET_METHOD(secondaryColor3uiv);
  JS_GL_SET_METHOD(secondaryColor3us);
  JS_GL_SET_METHOD(secondaryColor3usv);
  JS_GL_SET_METHOD(secondaryColorPointer);
  JS_GL_SET_METHOD(windowPos2d);
  JS_GL_SET_METHOD(windowPos2dv);
  JS_GL_SET_METHOD(windowPos2f);
  JS_GL_SET_METHOD(windowPos2fv);
  JS_GL_SET_METHOD(windowPos2i);
  JS_GL_SET_METHOD(windowPos2iv);
  JS_GL_SET_METHOD(windowPos2s);
  JS_GL_SET_METHOD(windowPos2sv);
  JS_GL_SET_METHOD(windowPos3d);
  JS_GL_SET_METHOD(windowPos3dv);
  JS_GL_SET_METHOD(windowPos3f);
  JS_GL_SET_METHOD(windowPos3fv);
  JS_GL_SET_METHOD(windowPos3i);
  JS_GL_SET_METHOD(windowPos3iv);
  JS_GL_SET_METHOD(windowPos3s);
  JS_GL_SET_METHOD(windowPos3sv);

  //GL_VERSION_1_5
  JS_GL_SET_METHOD(beginQuery);
  JS_GL_SET_METHOD(bindBuffer);
  JS_GL_SET_METHOD(bufferData);
  JS_GL_SET_METHOD(bufferSubData);
  JS_GL_SET_METHOD(deleteBuffers);
  JS_GL_SET_METHOD(deleteQueries);
  JS_GL_SET_METHOD(endQuery);
  JS_GL_SET_METHOD(genBuffers);
  JS_GL_SET_METHOD(genVertexArrays);
  JS_GL_SET_METHOD(bindVertexArray);
  JS_GL_SET_METHOD(genQueries);
  JS_GL_SET_METHOD(getBufferParameteriv);
  JS_GL_SET_METHOD(getBufferPointerv);
  JS_GL_SET_METHOD(getBufferSubData);
  JS_GL_SET_METHOD(getQueryObjectiv);
  JS_GL_SET_METHOD(getQueryObjectuiv);
  JS_GL_SET_METHOD(getQueryiv);
  JS_GL_SET_METHOD(isBuffer);
  JS_GL_SET_METHOD(isQuery);
  JS_GL_SET_METHOD(mapBuffer);
  JS_GL_SET_METHOD(unmapBuffer);

  //GL_VERSION_2_0
  JS_GL_SET_METHOD(attachShader);
  JS_GL_SET_METHOD(bindAttribLocation);
  JS_GL_SET_METHOD(blendEquationSeparate);
  JS_GL_SET_METHOD(compileShader);
  JS_GL_SET_METHOD(createProgram);
  JS_GL_SET_METHOD(createShader);
  JS_GL_SET_METHOD(deleteProgram);
  JS_GL_SET_METHOD(deleteShader);
  JS_GL_SET_METHOD(detachShader);
  JS_GL_SET_METHOD(disableVertexAttribArray);
  JS_GL_SET_METHOD(drawBuffers);
  JS_GL_SET_METHOD(enableVertexAttribArray);
  JS_GL_SET_METHOD(getActiveAttrib);
  JS_GL_SET_METHOD(getActiveUniform);
  JS_GL_SET_METHOD(getAttachedShaders);
  JS_GL_SET_METHOD(getAttribLocation);
  JS_GL_SET_METHOD(getProgramInfoLog);
  JS_GL_SET_METHOD(getProgramiv);
  JS_GL_SET_METHOD(getShaderInfoLog);
  JS_GL_SET_METHOD(getShaderSource);
  JS_GL_SET_METHOD(getShaderiv);
  JS_GL_SET_METHOD(getUniformLocation);
  JS_GL_SET_METHOD(getUniformfv);
  JS_GL_SET_METHOD(getUniformiv);
  JS_GL_SET_METHOD(getVertexAttribPointerv);
  JS_GL_SET_METHOD(getVertexAttribdv);
  JS_GL_SET_METHOD(getVertexAttribfv);
  JS_GL_SET_METHOD(getVertexAttribiv);
  JS_GL_SET_METHOD(isProgram);
  JS_GL_SET_METHOD(isShader);
  JS_GL_SET_METHOD(linkProgram);
  JS_GL_SET_METHOD(shaderSource);
  JS_GL_SET_METHOD(stencilFuncSeparate);
  JS_GL_SET_METHOD(stencilMaskSeparate);
  JS_GL_SET_METHOD(stencilOpSeparate);
  JS_GL_SET_METHOD(uniform1f);
  JS_GL_SET_METHOD(uniform1fv);
  JS_GL_SET_METHOD(uniform1i);
  JS_GL_SET_METHOD(uniform1iv);
  JS_GL_SET_METHOD(uniform2f);
  JS_GL_SET_METHOD(uniform2fv);
  JS_GL_SET_METHOD(uniform2i);
  JS_GL_SET_METHOD(uniform2iv);
  JS_GL_SET_METHOD(uniform3f);
  JS_GL_SET_METHOD(uniform3fv);
  JS_GL_SET_METHOD(uniform3i);
  JS_GL_SET_METHOD(uniform3iv);
  JS_GL_SET_METHOD(uniform4f);
  JS_GL_SET_METHOD(uniform4fv);
  JS_GL_SET_METHOD(uniform4i);
  JS_GL_SET_METHOD(uniform4iv);
  JS_GL_SET_METHOD(uniformMatrix2fv);
  JS_GL_SET_METHOD(uniformMatrix3fv);
  JS_GL_SET_METHOD(uniformMatrix4fv);
  JS_GL_SET_METHOD(useProgram);
  JS_GL_SET_METHOD(validateProgram);
  JS_GL_SET_METHOD(vertexAttrib1d);
  JS_GL_SET_METHOD(vertexAttrib1dv);
  JS_GL_SET_METHOD(vertexAttrib1f);
  JS_GL_SET_METHOD(vertexAttrib1fv);
  JS_GL_SET_METHOD(vertexAttrib1s);
  JS_GL_SET_METHOD(vertexAttrib1sv);
  JS_GL_SET_METHOD(vertexAttrib2d);
  JS_GL_SET_METHOD(vertexAttrib2dv);
  JS_GL_SET_METHOD(vertexAttrib2f);
  JS_GL_SET_METHOD(vertexAttrib2fv);
  JS_GL_SET_METHOD(vertexAttrib2s);
  JS_GL_SET_METHOD(vertexAttrib2sv);
  JS_GL_SET_METHOD(vertexAttrib3d);
  JS_GL_SET_METHOD(vertexAttrib3dv);
  JS_GL_SET_METHOD(vertexAttrib3f);
  JS_GL_SET_METHOD(vertexAttrib3fv);
  JS_GL_SET_METHOD(vertexAttrib3s);
  JS_GL_SET_METHOD(vertexAttrib3sv);
  JS_GL_SET_METHOD(vertexAttrib4Nbv);
  JS_GL_SET_METHOD(vertexAttrib4Niv);
  JS_GL_SET_METHOD(vertexAttrib4Nsv);
  JS_GL_SET_METHOD(vertexAttrib4Nub);
  JS_GL_SET_METHOD(vertexAttrib4Nubv);
  JS_GL_SET_METHOD(vertexAttrib4Nuiv);
  JS_GL_SET_METHOD(vertexAttrib4Nusv);
  JS_GL_SET_METHOD(vertexAttrib4bv);
  JS_GL_SET_METHOD(vertexAttrib4d);
  JS_GL_SET_METHOD(vertexAttrib4dv);
  JS_GL_SET_METHOD(vertexAttrib4f);
  JS_GL_SET_METHOD(vertexAttrib4fv);
  JS_GL_SET_METHOD(vertexAttrib4iv);
  JS_GL_SET_METHOD(vertexAttrib4s);
  JS_GL_SET_METHOD(vertexAttrib4sv);
  JS_GL_SET_METHOD(vertexAttrib4ubv);
  JS_GL_SET_METHOD(vertexAttrib4uiv);
  JS_GL_SET_METHOD(vertexAttrib4usv);
  JS_GL_SET_METHOD(vertexAttribPointer);

  //GL_VERSION_2_1
  JS_GL_SET_METHOD(uniformMatrix2x3fv);
  JS_GL_SET_METHOD(uniformMatrix2x4fv);
  JS_GL_SET_METHOD(uniformMatrix3x2fv);
  JS_GL_SET_METHOD(uniformMatrix3x4fv);
  JS_GL_SET_METHOD(uniformMatrix4x2fv);
  JS_GL_SET_METHOD(uniformMatrix4x3fv);

  //GL_VERSION_3_0
  JS_GL_SET_METHOD(beginConditionalRender);
  JS_GL_SET_METHOD(beginTransformFeedback);
  JS_GL_SET_METHOD(bindFragDataLocation);
  JS_GL_SET_METHOD(clampColor);
  JS_GL_SET_METHOD(clearBufferfi);
  JS_GL_SET_METHOD(clearBufferfv);
  JS_GL_SET_METHOD(clearBufferiv);
  JS_GL_SET_METHOD(clearBufferuiv);
  JS_GL_SET_METHOD(colorMaski);
  JS_GL_SET_METHOD(disablei);
  JS_GL_SET_METHOD(enablei);
  JS_GL_SET_METHOD(endConditionalRender);
  JS_GL_SET_METHOD(endTransformFeedback);
  JS_GL_SET_METHOD(getBooleani_v);
  JS_GL_SET_METHOD(getFragDataLocation);
  JS_GL_SET_METHOD(getStringi);
  JS_GL_SET_METHOD(getTexParameterIiv);
  JS_GL_SET_METHOD(getTexParameterIuiv);
  JS_GL_SET_METHOD(getTransformFeedbackVarying);
  JS_GL_SET_METHOD(getUniformuiv);
  JS_GL_SET_METHOD(getVertexAttribIiv);
  JS_GL_SET_METHOD(getVertexAttribIuiv);
  JS_GL_SET_METHOD(isEnabledi);
  JS_GL_SET_METHOD(texParameterIiv);
  JS_GL_SET_METHOD(texParameterIuiv);
  JS_GL_SET_METHOD(transformFeedbackVaryings);
  JS_GL_SET_METHOD(uniform1ui);
  JS_GL_SET_METHOD(uniform1uiv);
  JS_GL_SET_METHOD(uniform2ui);
  JS_GL_SET_METHOD(uniform2uiv);
  JS_GL_SET_METHOD(uniform3ui);
  JS_GL_SET_METHOD(uniform3uiv);
  JS_GL_SET_METHOD(uniform4ui);
  JS_GL_SET_METHOD(uniform4uiv);
  JS_GL_SET_METHOD(vertexAttribI1i);
  JS_GL_SET_METHOD(vertexAttribI1iv);
  JS_GL_SET_METHOD(vertexAttribI1ui);
  JS_GL_SET_METHOD(vertexAttribI1uiv);
  JS_GL_SET_METHOD(vertexAttribI2i);
  JS_GL_SET_METHOD(vertexAttribI2iv);
  JS_GL_SET_METHOD(vertexAttribI2ui);
  JS_GL_SET_METHOD(vertexAttribI2uiv);
  JS_GL_SET_METHOD(vertexAttribI3i);
  JS_GL_SET_METHOD(vertexAttribI3iv);
  JS_GL_SET_METHOD(vertexAttribI3ui);
  JS_GL_SET_METHOD(vertexAttribI3uiv);
  JS_GL_SET_METHOD(vertexAttribI4bv);
  JS_GL_SET_METHOD(vertexAttribI4i);
  JS_GL_SET_METHOD(vertexAttribI4iv);
  JS_GL_SET_METHOD(vertexAttribI4sv);
  JS_GL_SET_METHOD(vertexAttribI4ubv);
  JS_GL_SET_METHOD(vertexAttribI4ui);
  JS_GL_SET_METHOD(vertexAttribI4uiv);
  JS_GL_SET_METHOD(vertexAttribI4usv);
  JS_GL_SET_METHOD(vertexAttribIPointer);

  //GL_VERSION_3_1
  JS_GL_SET_METHOD(drawArraysInstanced);
  JS_GL_SET_METHOD(drawElementsInstanced);
  JS_GL_SET_METHOD(primitiveRestartIndex);
  JS_GL_SET_METHOD(texBuffer);

  //GL_VERSION_3_2
  JS_GL_SET_METHOD(framebufferTexture);
  JS_GL_SET_METHOD(getBufferParameteri64v);
  JS_GL_SET_METHOD(getInteger64i_v);

  //GL_VERSION_3_3
  JS_GL_SET_METHOD(vertexAttribDivisor);

  //GL_VERSION_4_0
  JS_GL_SET_METHOD(blendEquationSeparatei);
  JS_GL_SET_METHOD(blendEquationi);
  JS_GL_SET_METHOD(blendFuncSeparatei);
  JS_GL_SET_METHOD(blendFunci);
  JS_GL_SET_METHOD(minSampleShading);

  //GL_VERSION_4_5
  JS_GL_SET_METHOD(getGraphicsResetStatus);
  JS_GL_SET_METHOD(getnCompressedTexImage);
  JS_GL_SET_METHOD(getnTexImage);
  JS_GL_SET_METHOD(getnUniformdv);

  //GL_VERSION_4_6
  JS_GL_SET_METHOD(multiDrawArraysIndirectCount);
  JS_GL_SET_METHOD(multiDrawElementsIndirectCount);
  JS_GL_SET_METHOD(specializeShader);

  return exports;
}

NODE_API_MODULE(hello, Init)

}
