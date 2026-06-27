int __usercall sub_6F68F1C0@<eax>(_WORD *a1@<eax>, int *a2@<edx>, int a3@<ecx>, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  int *v7; // ST1C_4@1
  _WORD *v8; // ST18_4@1
  int v9; // ecx@1
  int v10; // edx@1
  int result; // eax@1
  int v12; // [sp+20h] [bp-2Ch]@1
  int v13; // [sp+24h] [bp-28h]@1
  int v14; // [sp+28h] [bp-24h]@1

  v7 = a2;
  v8 = a1;
  v12 = a5;
  v13 = a6;
  v14 = a7;
  dword_6FCFFE50(a3, a4, &v12);
  v9 = 4 * ((((v13 & ~(v13 >> 31)) - 255) >> 31) & ((v13 & ~(v13 >> 31)) - 255)) + 1020;
  LOWORD(v9) = v9 & 0x3E0;
  v10 = (((((v14 & ~(v14 >> 31)) - 255) >> 31) & ((v14 & ~(v14 >> 31)) - 255)) + 255) << 7;
  LOWORD(v10) = v10 & 0x7C00;
  result = v10 | v9 | (((((v12 & ~(v12 >> 31)) - 255) & (((v12 & ~(v12 >> 31)) - 255) >> 31)) + 255) >> 3) & 0x1F;
  *v8 = result;
  *v7 = (a6 << 8) | a5 | (a7 << 16);
  return result;
}
