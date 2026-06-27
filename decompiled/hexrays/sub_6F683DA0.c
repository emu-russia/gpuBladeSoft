void __usercall sub_6F683DA0(int a1@<ebp>)
{
  _BYTE *v1; // ebp@4
  int v2; // edi@4
  int v3; // ecx@4
  signed int v4; // ebx@6
  signed int v5; // edi@7
  signed int v6; // esi@7
  unsigned int v7; // eax@8
  bool v8; // zf@9
  int v9; // ecx@12
  int v10; // eax@12
  int v11; // [sp+14h] [bp-28h]@6
  int v12; // [sp+18h] [bp-24h]@5
  int v13; // [sp+1Ch] [bp-20h]@4

  if ( !dword_6FBB5094 )
    return;
  if ( ((unk_6FBB979E >> 4) & 1) != dword_6FBB5090 )
  {
    sub_6F753270();
    sub_6F754690(a1);
  }
  v1 = (_BYTE *)dword_6FBB508C;
  v2 = dword_6FBB5088;
  v3 = dword_6FBB5080;
  v13 = dword_6FBB508C;
  if ( dword_6FBB5088 <= 0 )
    goto LABEL_18;
  v12 = 0;
  do
  {
    v4 = dword_6FBB52F4;
    v11 = dword_6FBB5084 + dword_6FBB52F4 * (v12 << 11);
    if ( v3 <= 0 )
      goto LABEL_17;
    v5 = 0;
    v6 = 0;
    while ( 1 )
    {
      v9 = 2 * v4;
      v10 = 3 * v4 * (2 * v4 * (v6 / (2 * v4)) / v4);
      v7 = v5 < v4 ? *(_DWORD *)(v10 + v9 + v11 - 2) : *(_DWORD *)(v10 + v11 + 4 * v4 - 1);
      *v1 = v7;
      ++v5;
      v1 += 3;
      ++v6;
      *(v1 - 2) = BYTE1(v7);
      *(v1 - 1) = v7 >> 16;
      v8 = v9 == v5;
      v3 = dword_6FBB5080;
      if ( v8 )
        break;
      if ( dword_6FBB5080 <= v6 )
        goto LABEL_16;
LABEL_11:
      v4 = dword_6FBB52F4;
    }
    if ( dword_6FBB5080 > v6 )
    {
      v5 = 0;
      goto LABEL_11;
    }
LABEL_16:
    v2 = dword_6FBB5088;
LABEL_17:
    ++v12;
  }
  while ( v12 < v2 );
LABEL_18:
  sub_6F753380(v13, dword_6FBB507C, v3, v2);
  if ( sub_6F752AF0(dword_6FBB5080, dword_6FBB5088, dword_6FBB507C, 0) )
  {
    if ( dword_6FBB5094 )
      sub_6F753270();
  }
}
