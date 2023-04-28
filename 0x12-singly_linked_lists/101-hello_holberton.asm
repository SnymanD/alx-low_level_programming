global    main
extern    printf
main:
mov   rdi, format
xor   rax, eax
call  printf
mov 	rax, 0
ret
format: db `Hello, Holberton\n`,0
