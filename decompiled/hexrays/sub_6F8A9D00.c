signed int __usercall sub_6F8A9D00@<eax>(unsigned __int16 a1@<ax>, int a2@<edx>, int a3@<ecx>)
{
  _WORD *v3; // ebx@1
  char *v4; // edx@1
  int v5; // eax@3
  unsigned int v6; // eax@4
  unsigned int v7; // esi@4
  int v8; // ebp@4
  int v9; // esi@4
  signed int result; // eax@5
  int v11; // [sp+0h] [bp-34h]@1
  __int16 v12[2]; // [sp+12h] [bp-22h]@6
  char v13; // [sp+16h] [bp-1Eh]@2
  int v14; // [sp+20h] [bp-14h]@1
  char v15; // [sp+22h] [bp-12h]@1

  v3 = (_WORD *)(a2 + 16);
  v11 = a1;
  v4 = &v15;
  v14 = 0;
  do
  {
    while ( 1 )
    {
      v5 = *v3;
      v4 -= 2;
      --v3;
      if ( (_WORD)v5 )
        break;
      *((_WORD *)v4 - 1) = 0;
      if ( v4 == &v13 )
        goto LABEL_5;
    }
    v6 = v11 * v5;
    v7 = *((_WORD *)v4 + 1) + (unsigned __int16)v6;
    v8 = *(_WORD *)v4;
    *((_WORD *)v4 + 1) = v7;
    v9 = v8 + (v6 >> 16) + (v7 >> 16);
    *(_WORD *)v4 = v9;
    *((_WORD *)v4 - 1) = HIWORD(v9);
  }
  while ( v4 != &v13 );
LABEL_5:
  result = 2;
  do
  {
    *(_WORD *)(a3 + 2 * result) = v12[result];
    ++result;
  }
  while ( result != 9 );
  return result;
}
