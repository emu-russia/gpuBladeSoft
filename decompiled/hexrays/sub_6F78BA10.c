signed int __usercall sub_6F78BA10@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  bool v3; // zf@2
  void *v4; // edx@2
  signed int result; // eax@4
  int v6; // [sp+1Ch] [bp-20h]@6
  unsigned __int8 v7; // [sp+2Bh] [bp-11h]@6
  unsigned __int8 v8; // [sp+2Ch] [bp-10h]@7
  unsigned __int8 v9; // [sp+2Dh] [bp-Fh]@7
  unsigned __int8 v10; // [sp+2Eh] [bp-Eh]@7
  unsigned __int8 v11; // [sp+2Fh] [bp-Dh]@7

  if ( a2 & 0xFFFFFF00 )
  {
    v6 = a3;
    result = sub_6F7728E0(a1, (int)&unk_6FB5839C, (int)&v7);
    if ( !result )
    {
      *(_WORD *)v6 = v7 - 128;
      *(_WORD *)(v6 + 2) = v8 - 128;
      *(_WORD *)(v6 + 4) = v9 - 128;
      *(_WORD *)(v6 + 6) = v10 - 128;
      *(_WORD *)(v6 + 8) = v11 - 128;
      *(_WORD *)(v6 + 10) = 0;
    }
  }
  else
  {
    v3 = (a2 & 4) == 0;
    v4 = &unk_6FB583C0;
    if ( v3 )
      v4 = &unk_6FB583E0;
    result = sub_6F7728E0(a1, (int)v4, a3);
  }
  return result;
}
