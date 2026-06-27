__int16 __cdecl sub_6F70EA30(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int v9; // eax@1
  unsigned int v10; // edx@1
  int v11; // ebx@2
  signed int v12; // esi@2
  signed int v13; // eax@2
  int v14; // ecx@3
  int v15; // edx@3
  signed int v16; // ecx@3
  int v18; // [sp+30h] [bp-2Ch]@2
  int v19; // [sp+34h] [bp-28h]@2
  int v20; // [sp+38h] [bp-24h]@3

  v9 = dword_6FBBFE48(a8, a9);
  v10 = v9 >> 24;
  if ( BYTE3(v9) & 0x40 )
  {
    v11 = BYTE1(v9) * a6 >> 7;
    v12 = ((unsigned __int8)v9 * a5 >> 7) - 255;
    v13 = (a7 * (unsigned __int8)(v9 >> 16) >> 7) - 255;
    v18 = ((v12 >> 31) & v12) + 255;
    v19 = (((v11 - 255) >> 31) & (v11 - 255)) + 255;
    if ( v10 >> 7 )
    {
      v20 = ((v13 >> 31) & v13) + 255;
      dword_6FCFFE50(a3, a4, &v18);
      v14 = 4 * *a1;
      v15 = dword_6FBBFE50[v14 + 2];
      v9 = dword_6FBBFE50[v14] - (((((v18 & ~(v18 >> 31)) - 255) >> 31) & ((v18 & ~(v18 >> 31)) - 255)) + 255);
      v16 = dword_6FBBFE50[v14 + 1]
          - ((((signed int)((v19 & ~((unsigned __int64)v19 >> 32)) - 255) >> 31) & ((v19 & ~((unsigned __int64)v19 >> 32))
                                                                                  - 255))
           + 255);
      LOWORD(v9) = ((signed int)(v9 & ~((signed int)v9 >> 31)) >> 3) & 0x1F | (((unsigned __int16)(v15
                                                                                                 - (((((v20 & ~(v20 >> 31)) - 255) >> 31) & ((v20 & ~(v20 >> 31)) - 255))
                                                                                                  + 255)) & (unsigned __int16)~((v15 - (((((v20 & ~(v20 >> 31)) - 255) >> 31) & ((v20 & ~(v20 >> 31)) - 255)) + 255)) >> 31)) << 7) & 0x7C00 | 4 * (v16 & ~(v16 >> 31)) & 0x3E0 | 0x8000;
      *a1 = v9;
    }
    else
    {
      v20 = (((unsigned __int64)v13 >> 32) & v13) + 255;
      dword_6FCFFE50(a3, a4, &v18);
      v9 = ((v20 & ~(v20 >> 31)) - 255) >> 31;
      *a1 = ((((unsigned __int16)v9 & (unsigned __int16)((v20 & ~(v20 >> 31)) - 255)) + 255) << 7) & 0x7C00 | (4 * ((((v19 & ~(v19 >> 31)) - 255) >> 31) & ((v19 & ~(v19 >> 31)) - 255)) + 1020) & 0x3E0 | (((((v18 & ~(v18 >> 31)) - 255) & (((v18 & ~(v18 >> 31)) - 255) >> 31)) + 255) >> 3) & 0x1F;
    }
  }
  return v9;
}
