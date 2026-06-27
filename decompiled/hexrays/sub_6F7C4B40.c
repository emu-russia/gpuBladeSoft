int __cdecl sub_6F7C4B40(int a1, int a2)
{
  int v2; // edi@1
  int v3; // ecx@1
  signed int v5; // ebp@3
  int v6; // eax@5
  char v7; // al@10
  char v8; // [sp+1Bh] [bp-31h]@3
  int v9; // [sp+1Ch] [bp-30h]@3
  int v10; // [sp+2Ch] [bp-20h]@6

  v2 = *(_DWORD *)(a2 + 92);
  *(_DWORD *)(a1 + 40) = *(_WORD *)(a2 + 68);
  if ( sub_6F76D160(a2, 1970170211) )
    goto LABEL_2;
  v5 = 48;
  sub_6F7C4730(v3, a2);
  sub_6F7C3860(a1, a2);
  v9 = 0;
  v8 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v6 = sub_6F76D560(**(_DWORD **)(a1 + 36));
      if ( v6 )
      {
        if ( !sub_6F7C7C20(a2, v6, 2051, &v10) )
          break;
      }
      if ( ++v5 == 58 )
        goto LABEL_10;
    }
    if ( !v8 )
    {
      v9 = v10;
      goto LABEL_9;
    }
    if ( v10 != v9 )
      break;
LABEL_9:
    ++v5;
    v8 = 1;
    if ( v5 == 58 )
    {
LABEL_10:
      v7 = 1;
      goto LABEL_11;
    }
  }
  v7 = 0;
LABEL_11:
  *(_BYTE *)(a1 + 32) = v7;
LABEL_2:
  sub_6F76D230(a2, v2);
  return 0;
}
