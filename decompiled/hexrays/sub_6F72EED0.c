int __usercall sub_6F72EED0@<eax>(int a1@<eax>)
{
  bool v1; // zf@1
  int result; // eax@3
  size_t v3; // ebx@9
  int v4; // eax@9
  const void **v5; // esi@9
  unsigned int v6; // edi@11
  unsigned int v7; // [sp+18h] [bp-2D0h]@9
  void *v8; // [sp+24h] [bp-2C4h]@9
  int v9; // [sp+28h] [bp-2C0h]@2
  int v10; // [sp+2Ch] [bp-2BCh]@1
  void *v11; // [sp+38h] [bp-2B0h]@9
  int v12; // [sp+3Ch] [bp-2ACh]@9
  unsigned int v13; // [sp+40h] [bp-2A8h]@9
  int v14; // [sp+44h] [bp-2A4h]@9
  int v15; // [sp+48h] [bp-2A0h]@9
  void (__cdecl __noreturn *v16)(_DWORD *); // [sp+4Ch] [bp-29Ch]@5
  char v17; // [sp+D0h] [bp-218h]@5
  int v18; // [sp+110h] [bp-1D8h]@5
  int v19; // [sp+114h] [bp-1D4h]@9
  int v20; // [sp+16Ch] [bp-17Ch]@9
  unsigned int v21; // [sp+170h] [bp-178h]@9
  int v22; // [sp+178h] [bp-170h]@9
  unsigned int v23; // [sp+188h] [bp-160h]@10

  v1 = *(_WORD *)(a1 + 4) == -9985;
  dword_70057FB8 = 0;
  v10 = a1 + 4;
  if ( !v1 )
    return 1;
  v9 = *(_DWORD *)a1;
  if ( (unsigned int)(*(_DWORD *)a1 - 1) > 0x8FFB )
    return 1;
  v18 = sub_6F866BA0((int)&v16);
  v16 = sub_6F72BFE0;
  if ( setjmp3((int)&v17, 0) )
  {
    sub_6F8612A8((int)&v18);
    return 1;
  }
  sub_6F861178((int)&v18, 80, 448);
  sub_6F861FBC((int)&v18, v10, v9);
  if ( dword_70057FB8 || (sub_6F861534((int)&v18, 1), dword_70057FB8) || (sub_6F8617B8((int)&v18), dword_70057FB8) )
  {
    sub_6F8612A8((int)&v18);
    return 1;
  }
  v3 = v22 * v20;
  v4 = (*(int (__cdecl **)(int *, signed int, int, signed int))(v19 + 8))(&v18, 1, v22 * v20, 1);
  v15 = 0;
  v5 = (const void **)v4;
  v14 = v22;
  v12 = v20;
  v13 = v21;
  v7 = v21;
  v8 = malloc(v22 * v21 * v20);
  v11 = v8;
  if ( !v8 )
    sub_6F756950();
  v15 = 1;
  if ( v7 > v23 )
  {
    do
    {
      sub_6F861894((int)&v18, (int)v5, 1);
      v6 = v23;
      memcpy((char *)v8 + v3 * (v23 - 1), *v5, v3);
    }
    while ( v21 > v6 );
  }
  sub_6F861624((int)&v18);
  sub_6F8612A8((int)&v18);
  sub_6F69AA00((char *)&dword_6FBBFD70, (int)&v11, 1);
  result = v15;
  if ( v15 )
  {
    free(v11);
    result = 0;
  }
  return result;
}
