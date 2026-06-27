int __usercall sub_6F68F2A0@<eax>(_WORD *a1@<eax>, int *a2@<edx>, int a3@<ecx>, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  _WORD *v7; // esi@1
  int *v8; // ST1C_4@1
  int result; // eax@1
  int v10; // [sp+20h] [bp-2Ch]@1
  int v11; // [sp+24h] [bp-28h]@1
  int v12; // [sp+28h] [bp-24h]@1

  v7 = a1;
  v8 = a2;
  v10 = a5;
  v11 = a6;
  v12 = a7;
  dword_6FCFFE50(a3, a4, &v10);
  result = ((v12 & ~(v12 >> 31)) - 255) >> 31;
  *v7 = ((((unsigned __int16)result & (unsigned __int16)((v12 & ~(v12 >> 31)) - 255)) + 255) << 7) & 0x7C00 | (4 * ((((v11 & ~(v11 >> 31)) - 255) >> 31) & ((v11 & ~(v11 >> 31)) - 255)) + 1020) & 0x3E0 | (((((v10 & ~(v10 >> 31)) - 255) & (((v10 & ~(v10 >> 31)) - 255) >> 31)) + 255) >> 3) & 0x1F;
  *v8 = (a7 << 16) | (a6 << 8) | a5;
  *v7 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  return result;
}
