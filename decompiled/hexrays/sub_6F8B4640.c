signed int __cdecl sub_6F8B4640(int *a1, signed int a2)
{
  signed int v2; // ebx@1
  signed int *v3; // ebp@3
  int v4; // eax@3
  int v5; // ecx@3
  int v6; // eax@9
  int v7; // ebp@13
  int v8; // edi@13
  char *v9; // eax@17
  char *v10; // ST00_4@18
  size_t v11; // eax@18
  signed int result; // eax@20
  int v13; // [sp+14h] [bp-28h]@13
  signed int *v14; // [sp+14h] [bp-28h]@18
  int v15; // [sp+18h] [bp-24h]@18
  int v16; // [sp+1Ch] [bp-20h]@18

  v2 = a2;
  if ( !a1 )
    return 22;
  sub_6F8B6C00((int *)&unk_6FB48AD8);
  if ( dword_70373578 < (unsigned int)dword_7037357C )
  {
    v3 = (signed int *)(dword_7037354C + 4 * dword_70373578);
    v4 = (int)(v3 + 1);
    v5 = dword_70373578;
    if ( !*v3 )
      goto LABEL_22;
    while ( dword_7037357C != ++v5 )
    {
      v3 = (signed int *)v4;
      v4 += 4;
      if ( !*(_DWORD *)(v4 - 4) )
        goto LABEL_22;
    }
  }
  if ( dword_70373578 )
  {
    v3 = (signed int *)dword_7037354C;
    if ( !*(_DWORD *)dword_7037354C )
    {
      v5 = 0;
LABEL_22:
      *a1 = v5;
      if ( !a2 )
        v2 = 1;
      *v3 = v2;
      sub_6F8B6B50((int *)&unk_6FB48AD8);
      return 0;
    }
    v6 = dword_7037354C + 4;
    v5 = 0;
    while ( dword_70373578 != ++v5 )
    {
      v3 = (signed int *)v6;
      v6 += 4;
      if ( !*(_DWORD *)(v6 - 4) )
        goto LABEL_22;
    }
  }
  if ( dword_7037357C == 0x100000 )
    goto LABEL_30;
  v7 = dword_7037357C + 1;
  v13 = dword_7037357C;
  v8 = 2 * dword_7037357C;
  if ( !(2 * dword_7037357C) )
    v8 = dword_7037357C + 1;
  if ( v8 > 0x100000 )
    v8 = 0x100000;
  v9 = (char *)realloc((void *)dword_7037354C, 4 * v8);
  if ( v9 )
  {
    v16 = (int)v9;
    v15 = v13;
    v10 = &v9[4 * v13];
    v11 = 4 * (v8 - v13);
    v14 = (signed int *)v10;
    memset(v10, 0, v11);
    if ( !a2 )
      v2 = 1;
    dword_70373578 = v7;
    dword_7037354C = v16;
    *a1 = v15;
    *v14 = v2;
    dword_7037357C = v8;
    sub_6F8B6B50((int *)&unk_6FB48AD8);
    result = 0;
  }
  else
  {
LABEL_30:
    sub_6F8B6B50((int *)&unk_6FB48AD8);
    result = 12;
  }
  return result;
}
