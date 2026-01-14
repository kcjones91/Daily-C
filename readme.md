# Daily-C

Daily C programming exercises building foundational systems programming skills.

## Resources

- [Boot.dev](https://boot.dev) — Interactive labs
- *Head First C* — Griffiths (O'Reilly)
- *Computer Systems: A Programmer's Perspective* — Bryant & O'Hallaron

## Structure
```
DiaX/
├── src/          # Source files
├── unit_test/    # Tests (munit framework)
└── basicX        # Compiled binaries
```

## Progress

| Day  | Topics |
|------|--------|
| Dia1 | Basic syntax, printf, variables |
| Dia2 | Functions, unit testing with munit |
| Dia3 | Control flow |
| Dia4 | Arrays |
| Dia5 | Pointers |
| Dia6 | Structs |
| Dia7 | Memory |

## Building
```bash
cd DiaX/src
gcc -o ../basicX basicsX.c
```