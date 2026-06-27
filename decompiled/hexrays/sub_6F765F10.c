signed int __cdecl sub_6F765F10(int a1, const char *a2, signed int a3)
{
  signed int result; // eax@3
  char *v4; // eax@5
  char v5; // al@6

  if ( !a1 )
    goto LABEL_14;
  if ( !a2 )
    goto LABEL_14;
  v4 = (char *)sub_6F764A70(a1, a2, -1);
  if ( v4 == (char *)-1 )
    goto LABEL_14;
  v5 = *v4;
  if ( (v5 & 0xDF) == 89 || (v5 & 0xDF) == 84 || v5 == 49 )
    return 1;
  if ( (v5 & 0xD7) == 70 || v5 == 48 )
    result = 0;
  else
LABEL_14:
    result = a3;
  return result;
}
