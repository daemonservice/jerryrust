from ctypes import cdll
lib = cdll.LoadLibrary("target/release/libjerryrust.so")
lib.process()
print("test python done!")


