all: src/compile src/pointer src/type

src/compile:
	gcc -o ./bin/compile ./compile/volatile.c

src/pointer:
	gcc -o ./bin/dangling_pointer ./pointer/dangling_pointer.c
	gcc -o ./bin/double_pointer ./pointer/double_pointer.c
	gcc -o ./bin/pointing ./pointer/pointing.c
	gcc -o ./bin/return_stack_addr ./pointer/return_stack_addr.c
	gcc -o ./bin/string_literal ./pointer/string_literal.c

src/type:
	gcc -o ./bin/signed ./type/signed.c
	gcc -o ./bin/struct_size ./type/struct_size.c
	gcc -o ./bin/unsinged ./type/unsinged.c

clean:
	rm -f ./bin/*