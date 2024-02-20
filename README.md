# buggy
A piece of code with some bugs in it. For those who want to practice!

Vulnerabilities:

    Buffer Overflow Vulnerability
        Caused by: gets(buffer);
        Mitigation: Use fgets(buffer, sizeof(buffer), stdin);

    Format String Vulnerability
        Caused by: printf(buffer);
        Mitigation: Use printf("%s", buffer);

    Memory Leak Vulnerability
        Caused by: printf("Debug info: %p\n", (void*)secret);
        Mitigation: Avoid printing sensitive information, such as memory addresses.

Compilation Flags (Related to Security):

    Disabling Stack Protector: -fno-stack-protector
        Mitigation: Do not use this flag; allow stack protection.
    Executable Stack: -z execstack
        Mitigation: Avoid making the stack executable; do not use this flag unless necessary for specific functionalities that require it.
    Position Independent Executable (PIE) Disabled: -no-pie
        Mitigation: Compile with PIE enabled to benefit from ASLR.
