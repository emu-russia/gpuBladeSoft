unsigned int __usercall sub_6F892B30@<eax>(unsigned int *a1@<eax>, int a2@<edx>, unsigned int a3@<ecx>)
{
  int v3; // ebp@1
  unsigned int v4; // esi@1
  unsigned int v5; // ebx@1
  bool v6; // cf@3
  bool v7; // zf@3
  bool v8; // al@3
  char v9; // dl@6
  bool v11; // [sp+0h] [bp-16h]@1
  unsigned int *v12; // [sp+1h] [bp-15h]@1

  v3 = a2;
  v4 = *a1;
  v12 = a1;
  v5 = 0;
  v11 = a3 != 0 && *a1 <= 3;
  if ( v11 )
  {
    while ( 1 )
    {
      v9 = *(_BYTE *)(v3 + v5);
      if ( v9 == -(v4 >= 2) )
        break;
      if ( !v9 )
      {
        v6 = 4 - v4 < 3;
        v7 = v4 == 1;
        v4 = 4 - v4;
        v8 = v6 || v7;
        goto LABEL_4;
      }
      v4 = 0;
      ++v5;
      if ( !v11 )
        goto LABEL_9;
LABEL_5:
      if ( a3 <= v5 )
        goto LABEL_9;
    }
    v8 = ++v4 <= 3;
LABEL_4:
    ++v5;
    if ( !v8 )
      goto LABEL_9;
    goto LABEL_5;
  }
LABEL_9:
  *v12 = v4;
  return v5;
}
