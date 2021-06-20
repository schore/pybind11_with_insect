import inspect as ins

name = "hello_python"

hello = __import__(name)

a = ins.getmembers(hello, ins.isroutine)[0][1].__call__(1, 2)
print(a)
print(hello.add(3,4))

hello.hello()
ins.getmembers(hello, ins.isroutine)[1][1].__call__()
