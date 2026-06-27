__int16 __cdecl sub_6F6D90B0(_WORD *a1, _DWORD *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int v9; // eax@1
  unsigned int v10; // ebp@1
  signed int v11; // edi@2
  signed int v12; // edx@2
  signed int v13; // ecx@2
  int v14; // edx@3
  int v15; // ecx@3
  int v16; // edi@3
  int v17; // ecx@3
  signed int v18; // edi@6
  signed int v19; // edx@6
  signed int v20; // ecx@6

  JUMPOUT(*a1, 0, nullsub_40);
  v9 = dword_6FBBFE48(a8, a9);
  v10 = v9 >> 24;
  if ( (v9 >> 24) & 0x40 )
  {
    v11 = (unsigned __int8)v9;
    v12 = BYTE1(v9);
    v9 >>= 16;
    v13 = (unsigned __int8)v9;
    if ( v10 >> 7 )
    {
      v9 = 16 * *a1;
      v18 = *(int *)((char *)dword_6FBBFE50 + v9) + (v11 >> 2) - 255;
      v19 = *(int *)((char *)dword_6FBBFE54 + v9) + (v12 >> 2) - 255;
      v20 = (v13 >> 2) + *(int *)((char *)&dword_6FBBFE50[2] + v9) - 255;
      LOWORD(v9) = (4 * ((v19 >> 31) & v19) + 1020) & 0x3E0 | ((((v18 >> 31) & v18) + 255) >> 3) & 0x1F | ((((unsigned __int16)v20 & (unsigned __int16)(v20 >> 31)) + 255) << 7) & 0x7C00 | 0x8000;
      v17 = (unsigned __int16)v9;
      *a1 = v9;
    }
    else
    {
      v14 = 4 * v12;
      v15 = (unsigned __int8)v9 << 7;
      LOWORD(v14) = v14 & 0x3E0;
      LOWORD(v15) = v15 & 0x7C00;
      v16 = v14 | v15 | (v11 >> 3);
      *a1 = v16;
      v17 = (signed __int16)v16;
    }
    *a2 = dword_6FCBFE50[v17];
  }
  return v9;
}
