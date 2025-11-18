void main()
 {
    char ch = 'H';

    if (ch >= 'A' && ch <= 'Z') {
        printf("%c is an Uppercase letter\n", ch);
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("%c is a Lowercase letter\n", ch);
    }
    else {
        printf("%c is not an alphabet letter\n", ch);
    }
}