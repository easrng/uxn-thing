# uxn-console
run `./build` to build the rom. you'll need clang, clang-format, [chibicc for uxn](https://github.com/lynn/chibicc), and uxnasm in your $PATH \
or just get the copy i built from [releases](https://github.com/easrng/uxn-console/releases)

want to use it as a terminal for some reason?
```sh
mkfifo term && dash -i <term 2>&1 | uxnemu main.rom >term; rm term
```
