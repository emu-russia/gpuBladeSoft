unsigned int __usercall sub_6F690AD0@<eax>(_WORD *a1@<eax>, unsigned int *a2@<edx>, int a3@<ecx>, int a4)
{
  _WORD *v4; // esi@1
  unsigned int result; // eax@1
  int v6; // ecx@2
  signed int v7; // ebp@2
  signed int v8; // ebx@2
  signed int v9; // edx@2
  signed int v10; // edi@3
  int v11; // eax@3
  signed int v12; // ST18_4@3
  unsigned int v13; // ebx@3
  signed int v14; // edx@3
  unsigned int *v15; // [sp+10h] [bp-2Ch]@1

  v4 = a1;
  v15 = a2;
  result = dword_6FBBFE48(a3, a4);
  if ( BYTE3(result) & 0x40 )
  {
    v6 = BYTE3(result);
    v7 = (unsigned __int8)result;
    v8 = BYTE1(result);
    v9 = (unsigned __int8)(result >> 16);
    if ( (unsigned int)BYTE3(result) >> 7 )
    {
      v10 = v9 >> 2;
      v11 = 4 * *v4;
      v12 = v8 >> 2;
      *v4 = (4 * (((dword_6FBBFE50[v11 + 1] + v12 - 255) >> 31) & (LOWORD(dword_6FBBFE50[v11 + 1]) + v12 - 255)) + 1020) & 0x3E0 | ((((unsigned __int16)(v10 + LOWORD(dword_6FBBFE50[v11 + 2]) - 255) & (unsigned __int16)((v10 + dword_6FBBFE50[v11 + 2] - 255) >> 31)) + 255) << 7) & 0x7C00 | ((((dword_6FBBFE50[v11] + (v7 >> 2) - 255) & ((dword_6FBBFE50[v11] + (v7 >> 2) - 255) >> 31)) + 255) >> 3) & 0x1F | 0x8000;
      v13 = *v15;
      v14 = (v7 >> 2) + (unsigned __int8)*v15 - 255;
      result = (((v10 + (unsigned __int8)(*v15 >> 16) - 255) & ((v10 + (unsigned __int8)(*v15 >> 16) - 255) >> 31)) + 255) << 16;
      *v15 = (((v14 >> 31) & v14) + 255) | result | (((((v12 + BYTE1(v13) - 255) >> 31) & (v12 + BYTE1(v13) - 255)) + 255) << 8) | (v6 << 24);
    }
    else
    {
      *v4 = 4 * BYTE1(result) & 0x3E0 | ((_WORD)v9 << 7) & 0x7C00 | ((signed int)(unsigned __int8)result >> 3);
      *v15 = result;
    }
  }
  return result;
}
