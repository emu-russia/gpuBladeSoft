int __thiscall sub_6F93D780(int this, int a2, int a3, unsigned int a4, __int16 a5)
{
  int v5; // edx@1
  unsigned int v6; // ebx@1
  int v7; // eax@2
  int v8; // esi@2
  unsigned int v9; // edi@2
  unsigned int v10; // ecx@3
  int v11; // edx@7
  const void *v12; // ecx@7
  void *v13; // edx@7
  __int16 *v14; // edx@10
  int v16; // [sp+18h] [bp-24h]@5

  v5 = *(_DWORD *)(this + 4);
  v6 = a4;
  if ( a4 > a3 + 0x3FFFFFFF - v5 )
    sub_6F95B240("basic_string::_M_replace_aux");
  v7 = *(_DWORD *)this;
  v8 = this;
  v9 = v5 + a4 - a3;
  if ( *(_DWORD *)this == this + 8 )
    v10 = 7;
  else
    v10 = *(_DWORD *)(this + 8);
  if ( v10 < v9 )
  {
    sub_6F93F200(v8, a2, a3, 0, a4);
    v7 = *(_DWORD *)v8;
    if ( !a4 )
      goto LABEL_12;
  }
  else
  {
    v16 = v5 - (a2 + a3);
    if ( v5 == a2 + a3 || a3 == a4 )
    {
LABEL_9:
      if ( !a4 )
        goto LABEL_12;
      goto LABEL_10;
    }
    v11 = v7 + 2 * a2;
    v12 = (const void *)(v11 + 2 * a3);
    v13 = (void *)(v11 + 2 * a4);
    if ( v16 != 1 )
    {
      memmove(v13, v12, 2 * v16);
      v7 = *(_DWORD *)v8;
      goto LABEL_9;
    }
    *(_WORD *)v13 = *(_WORD *)v12;
    if ( !a4 )
      goto LABEL_12;
  }
LABEL_10:
  v14 = (__int16 *)(v7 + 2 * a2);
  if ( a4 == 1 )
  {
    *v14 = a5;
  }
  else
  {
    do
    {
      *v14 = a5;
      ++v14;
      --v6;
    }
    while ( v6 );
  }
LABEL_12:
  *(_DWORD *)(v8 + 4) = v9;
  *(_WORD *)(v7 + 2 * v9) = 0;
  return v8;
}
