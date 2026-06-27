int __usercall sub_6F6A7BC0@<eax>(int a1@<eax>)
{
  int v1; // ebx@1
  char *v2; // eax@1
  char v3; // dl@2
  int v4; // edi@5
  int v5; // esi@6
  int v18; // ebp@12
  signed int v19; // edi@14
  int v21; // ebp@17
  int v22; // edi@18
  int v23; // esi@18
  char v24; // al@19
  unsigned __int8 v25; // al@19
  int v26; // eax@19
  int v27; // ST00_4@19
  unsigned __int16 v28; // ax@19
  int v29; // esi@22
  int v30; // ebp@23
  unsigned __int8 v31; // al@24
  int v32; // eax@24
  int v33; // [sp+8h] [bp-64h]@0
  int v34; // [sp+10h] [bp-5Ch]@17
  int v35; // [sp+10h] [bp-5Ch]@22
  int v36; // [sp+14h] [bp-58h]@1
  int v37; // [sp+18h] [bp-54h]@5
  int v38; // [sp+1Ch] [bp-50h]@1
  char *v39; // [sp+24h] [bp-48h]@1
  int v40; // [sp+28h] [bp-44h]@1
  int v41; // [sp+2Ch] [bp-40h]@1
  int v42; // [sp+30h] [bp-3Ch]@1
  int v43; // [sp+34h] [bp-38h]@1
  char *v44; // [sp+38h] [bp-34h]@14
  char v45; // [sp+40h] [bp-2Ch]@14

  v1 = dword_6FBBDBB0 + dword_6FBBDBC4;
  v38 = a1;
  v43 = 0;
  v36 = dword_6FBBDBAC;
  v40 = 256;
  v41 = 256;
  v42 = 4;
  v2 = (char *)malloc(0x40000u);
  v39 = v2;
  if ( !v2 )
    sub_6F756950();
  v43 = 1;
  v3 = ((unsigned __int16)word_6FBB979C >> 7) & 3;
  if ( v3 == 1 )
  {
    v29 = (int)&v2[-8 * v36];
    v35 = (int)&v2[-8 * v36 + 0x40000];
    do
    {
      v30 = v36;
      do
      {
        v31 = dword_6FBB51E4(v30, v1);
        *(_DWORD *)(v29 + 8 * v30) = dword_6FCFFFB0[(unsigned __int16)dword_6FBB51E4(
                                                                        dword_6FBBDBD8 + v31,
                                                                        dword_6FBBDBDC)] | 0xFF000000;
        v32 = dword_6FBB51E4(v30, v1);
        *(_DWORD *)(v29 + 8 * v30++ + 4) = dword_6FCFFFB0[(unsigned __int16)dword_6FBB51E4(
                                                                              dword_6FBBDBD8 + BYTE1(v32),
                                                                              dword_6FBBDBDC)] | 0xFF000000;
      }
      while ( v36 + 128 != v30 );
      ++v1;
      v29 += 1024;
    }
    while ( v29 != v35 );
  }
  else if ( v3 )
  {
    if ( v3 == 2 )
    {
      v4 = (int)&v2[-4 * v36];
      v37 = (int)&v2[-4 * v36 + 0x40000];
      do
      {
        v5 = v36;
        do
        {
          *(_DWORD *)(v4 + 4 * v5) = dword_6FCFFFB0[(unsigned __int16)dword_6FBB51E4(v5, v1)] | 0xFF000000;
          *(_DWORD *)(v4 + 4 * (v5 + 1)) = dword_6FCFFFB0[(unsigned __int16)dword_6FBB51E4(v5 + 1, v1)] | 0xFF000000;
          *(_DWORD *)(v4 + 4 * (v5 + 2)) = dword_6FCFFFB0[(unsigned __int16)dword_6FBB51E4(v5 + 2, v1)] | 0xFF000000;
          v18 = v5 + 3;
          v5 += 4;
          *(_DWORD *)(v4 + 4 * v18) = dword_6FCFFFB0[(unsigned __int16)dword_6FBB51E4(v18, v1)] | 0xFF000000;
        }
        while ( v5 != v36 + 256 );
        ++v1;
        v4 += 1024;
      }
      while ( v4 != v37 );
    }
  }
  else
  {
    v21 = (int)(v2 + 1024);
    v34 = (int)(v2 + 263168);
    do
    {
      v22 = v36;
      v23 = v21 - 1024;
      do
      {
        v23 += 16;
        v24 = dword_6FBB51E4(v22, v1);
        *(_DWORD *)(v23 - 16) = dword_6FCFFFB0[(unsigned __int16)dword_6FBB51E4(
                                                                   dword_6FBBDBD8 + (v24 & 0xF),
                                                                   dword_6FBBDBDC)] | 0xFF000000;
        v25 = dword_6FBB51E4(v22, v1);
        *(_DWORD *)(v23 - 12) = dword_6FCFFFB0[(unsigned __int16)dword_6FBB51E4(
                                                                   dword_6FBBDBD8 + (v25 >> 4),
                                                                   dword_6FBBDBDC)] | 0xFF000000;
        v26 = dword_6FBB51E4(v22, v1);
        *(_DWORD *)(v23 - 8) = dword_6FCFFFB0[(unsigned __int16)dword_6FBB51E4(
                                                                  dword_6FBBDBD8 + (BYTE1(v26) & 0xF),
                                                                  dword_6FBBDBDC)] | 0xFF000000;
        v27 = v22++;
        v28 = dword_6FBB51E4(v27, v1);
        *(_DWORD *)(v23 - 4) = dword_6FCFFFB0[(unsigned __int16)dword_6FBB51E4(
                                                                  dword_6FBBDBD8 + ((signed int)v28 >> 12),
                                                                  dword_6FBBDBDC)] | 0xFF000000;
      }
      while ( v23 != v21 );
      v21 += 1024;
      ++v1;
    }
    while ( v21 != v34 );
  }
  sub_6F757580((int)&v39);
  v44 = &v45;
  LOBYTE(v33) = 0;
  sub_6F93A6C0((int)&v44, *(_BYTE **)v38, (_BYTE *)(*(_DWORD *)v38 + *(_DWORD *)(v38 + 4)), v33);
  v19 = sub_6F757680(&v39, (const char **)&v44);
  if ( v44 != &v45 )
    j_free_1(v44);
  return v19;
}
