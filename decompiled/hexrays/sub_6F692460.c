int __usercall sub_6F692460@<eax>(int result@<eax>, int *a2@<edx>, int a3@<ecx>, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  int *v7; // ebp@1
  _WORD *v8; // edi@2
  int v9; // eax@2
  int v10; // ecx@2
  int v11; // ebx@2
  int v12; // edx@2
  signed int v13; // ecx@2
  int v14; // [sp+20h] [bp-3Ch]@2
  int v15; // [sp+24h] [bp-38h]@2
  int v16; // [sp+28h] [bp-34h]@2

  v7 = a2;
  if ( *(_WORD *)result >= 0 )
  {
    v8 = (_WORD *)result;
    v14 = a5;
    v15 = a6;
    v16 = a7;
    dword_6FCFFE50(a3, a4, &v14);
    v9 = 4 * *v8;
    v10 = dword_6FBBFE58[v9] + (((((v16 & ~(v16 >> 31)) - 255) & (((v16 & ~(v16 >> 31)) - 255) >> 31)) + 255) >> 2);
    v11 = dword_6FBBFE54[v9] + (((((v15 & ~(v15 >> 31)) - 255) & (((v15 & ~(v15 >> 31)) - 255) >> 31)) + 255) >> 2);
    *v8 = ((((unsigned __int16)((v10 - 255) >> 31) & (unsigned __int16)(v10 - 255)) + 255) << 7) & 0x7C00 | (4 * (((v11 - 255) >> 31) & (v11 - 255)) + 1020) & 0x3E0 | (((((dword_6FBBFE50[v9] + ((((((v14 & ~(v14 >> 31)) - 255) >> 31) & ((v14 & ~(v14 >> 31)) - 255)) + 255) >> 2) - 255) >> 31) & (dword_6FBBFE50[v9] + ((((((v14 & ~(v14 >> 31)) - 255) >> 31) & ((v14 & ~(v14 >> 31)) - 255)) + 255) >> 2) - 255)) + 255) >> 3) & 0x1F;
    v12 = *v7;
    v13 = (unsigned __int8)*v7 + ((signed int)a5 >> 2) - 255;
    *v7 = (((v13 >> 31) & v13) + 255) | ((((((signed int)a7 >> 2) + (unsigned __int8)((unsigned int)*v7 >> 16) - 255) & ((((signed int)a7 >> 2) + (unsigned __int8)((unsigned int)*v7 >> 16) - 255) >> 31))
                                        + 255) << 16) | (((((((signed int)a6 >> 2) + BYTE1(v12) - 255) >> 31) & (((signed int)a6 >> 2) + BYTE1(v12) - 255))
                                                        + 255) << 8);
    result = ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
    *v8 |= result;
  }
  return result;
}
