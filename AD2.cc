#include <node.h>

void printTest(const v8::FunctionCallbackInfo<v8::Value>& args){
  printf("Hello!");
}

void Initialize(v8::Local<v8::Object> exports) {
  NODE_SET_METHOD(exports, "hello", printTest);
}

NODE_MODULE(module_name, Initialize)