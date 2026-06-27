int __cdecl sub_6F773EF0(_BYTE *a1, char *a2, unsigned int a3)
{
  _BYTE *v3; // eax@1
  char *v4; // edx@1
  char v5; // cl@2
  _BYTE *v6; // ebx@3
  int result; // eax@6

  v3 = a1;
  v4 = a2;
  if ( a3 > 1 && (v5 = *a2) != 0 )
  {
    v6 = &a1[a3 - 1];
    while ( 1 )
    {
      ++v3;
      ++v4;
      *(v3 - 1) = v5;
      if ( v3 == v6 )
        break;
      v5 = *v4;
      if ( !*v4 )
        goto LABEL_7;
    }
    *v6 = 0;
    result = *v4 != 0;
  }
  else
  {
LABEL_7:
    *v3 = 0;
    result = *v4 != 0;
  }
  return result;
}
