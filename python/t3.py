def will_return(prompt):
    D_count = 0
    E_count = 0
    C_count = 0
    B_count = 0

    chars = prompt.split()

    for letter in chars:
        if letter.upper() == 'D':
            D_count += 1
        elif letter.upper() == 'E':
            E_count += 1
        elif letter.upper() == 'C':
            C_count += 1
        elif letter.upper() == 'B':
            B_count += 1

    if D_count == E_count and C_count == B_count:
        return True
    else:
        return False


print(will_return("DE"))
