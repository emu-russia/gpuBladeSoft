_WORD *__usercall sub_6F691FC0@<eax>(_WORD *result@<eax>, unsigned int *a2@<edx>, int a3@<ecx>, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  unsigned int *v7; // esi@2
  _WORD *v8; // ST10_4@2
  __int64 v9; // rax@2
  int v10; // edi@2
  signed int v11; // ebp@2
  signed int v12; // edi@2
  unsigned int v13; // ebx@2
  int v14; // [sp+20h] [bp-3Ch]@2
  int v15; // [sp+24h] [bp-38h]@2
  int v16; // [sp+28h] [bp-34h]@2

  if ( *result >= 0 )
  {
    v7 = a2;
    v8 = result;
    v14 = a5;
    v15 = a6;
    v16 = a7;
    dword_6FCFFE50(a3, a4, &v14);
    v9 = (v16 & ~(v16 >> 31)) - 255;
    v10 = 4 * *v8;
    LODWORD(v9) = (HIDWORD(v9) & v9) + 255;
    HIDWORD(v9) = &dword_6FBBFE50[v10];
    v11 = dword_6FBBFE50[v10] - (((((v14 & ~(v14 >> 31)) - 255) >> 31) & ((v14 & ~(v14 >> 31)) - 255)) + 255);
    v12 = dword_6FBBFE54[v10] - (((((v15 & ~(v15 >> 31)) - 255) >> 31) & ((v15 & ~(v15 >> 31)) - 255)) + 255);
    *v8 = (((unsigned __int16)~(unsigned __int16)((*(_DWORD *)(HIDWORD(v9) + 8) - (signed int)v9) >> 31) & (unsigned __int16)(*(_WORD *)(HIDWORD(v9) + 8) - v9)) << 7) & 0x7C00 | 4 * (~(unsigned __int16)(v12 >> 31) & v12) & 0x3E0 | ((~(v11 >> 31) & v11) >> 3) & 0x1F;
    v13 = *v7;
    HIDWORD(v9) = (unsigned __int8)(*v7 >> 16) - a7;
    result = (_WORD *)(~(((unsigned __int8)*v7 - a5) >> 31) & ((unsigned __int8)*v7 - a5) | ((HIDWORD(v9) & ~(SHIDWORD(v9) >> 31)) << 16) | (((BYTE1(v13) - a6) & ~((BYTE1(v13) - a6) >> 31)) << 8));
    *v7 = (unsigned int)result;
  }
  return result;
}
