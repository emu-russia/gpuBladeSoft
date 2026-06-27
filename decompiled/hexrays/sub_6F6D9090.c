unsigned int __cdecl sub_6F6D9090(_WORD *a1, _DWORD *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int result; // eax@1
  unsigned int v10; // ebp@1
  signed int v11; // edx@2
  signed int v12; // ebx@2
  unsigned int v13; // eax@2
  signed int v14; // ecx@2
  int v15; // ebx@3
  int v16; // ecx@3
  int v17; // edx@3
  int v18; // ecx@3
  int v19; // eax@6
  signed int v20; // edx@6
  signed int v21; // ebx@6
  signed int v22; // ecx@6

  JUMPOUT(*a1, 0, nullsub_41);
  result = dword_6FBBFE48(a8, a9);
  v10 = result >> 24;
  if ( (result >> 24) & 0x40 )
  {
    v11 = (unsigned __int8)result;
    v12 = BYTE1(result);
    v13 = result >> 16;
    v14 = (unsigned __int8)v13;
    if ( v10 >> 7 )
    {
      v19 = 16 * *a1;
      v20 = *(int *)((char *)dword_6FBBFE50 + v19) + (v11 >> 2) - 255;
      v21 = *(int *)((char *)dword_6FBBFE54 + v19) + (v12 >> 2) - 255;
      v22 = (v14 >> 2) + *(int *)((char *)&dword_6FBBFE50[2] + v19) - 255;
      LOWORD(v19) = (4 * ((v21 >> 31) & v21) + 1020) & 0x3E0 | ((((v20 >> 31) & v20) + 255) >> 3) & 0x1F | ((((unsigned __int16)v22 & (unsigned __int16)(v22 >> 31)) + 255) << 7) & 0x7C00 | 0x8000;
      v18 = (unsigned __int16)v19;
      *a1 = v19;
    }
    else
    {
      v15 = 4 * v12;
      v16 = (unsigned __int8)v13 << 7;
      LOWORD(v15) = v15 & 0x3E0;
      LOWORD(v16) = v16 & 0x7C00;
      v17 = v15 | v16 | (v11 >> 3);
      *a1 = v17;
      v18 = (signed __int16)v17;
    }
    *a2 = dword_6FCBFE50[v18];
    result = ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
    *a1 |= result;
  }
  return result;
}
