signed int __cdecl sub_6F83CFCF(int **a1)
{
  int v1; // ST20_4@1
  signed int v2; // eax@1
  int v4; // [sp+24h] [bp-14h]@1
  int *v5; // [sp+2Ch] [bp-Ch]@6

  v4 = **a1;
  v1 = (*a1)[1];
  sub_6F852C1F(**a1, 1);
  sub_6F83B745(v4, v1);
  a1[2] = *(int **)(v4 + 256);
  a1[3] = *(int **)(v4 + 260);
  v2 = sub_6F83CEFC(v4);
  a1[4] = (int *)v2;
  if ( v2 & 2 && (*(_WORD *)(v4 + 806) & 0x8042) == 2 )
    a1[5] = (int *)((unsigned int)a1[5] | 1);
  if ( *(_BYTE *)(v4 + 343) )
  {
    if ( *(_BYTE *)(v4 + 343) == 3 )
      v5 = (int *)*(_WORD *)(v4 + 328);
    else
      v5 = (int *)256;
  }
  else
  {
    v5 = (int *)(1 << *(_BYTE *)(v4 + 344));
  }
  if ( (unsigned int)v5 > 0x100 )
    v5 = (int *)256;
  a1[6] = v5;
  return 1;
}
