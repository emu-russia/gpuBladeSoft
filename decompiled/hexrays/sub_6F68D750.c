int __usercall sub_6F68D750@<eax>(int result@<eax>, int a2@<edx>, int a3@<ecx>, unsigned __int8 a4, unsigned __int8 a5, unsigned __int8 a6)
{
  _WORD *v6; // ebx@2
  int v7; // ebp@2
  int v8; // esi@2
  int v9; // edx@2
  int v10; // [sp+10h] [bp-2Ch]@2
  int v11; // [sp+14h] [bp-28h]@2
  int v12; // [sp+18h] [bp-24h]@2

  if ( *(_WORD *)result >= 0 )
  {
    v6 = (_WORD *)result;
    v10 = a4;
    v11 = a5;
    v12 = a6;
    dword_6FCFFE50(a2, a3, &v10);
    v7 = 4 * ((((v11 & ~(v11 >> 31)) - 255) >> 31) & ((v11 & ~(v11 >> 31)) - 255)) + 1020;
    LOWORD(v7) = v7 & 0x3E0;
    v8 = ((((v12 & ~(v12 >> 31)) - 255) & (((v12 & ~(v12 >> 31)) - 255) >> 31)) + 255) << 7;
    LOWORD(v8) = v8 & 0x7C00;
    v9 = v8 | v7 | (((((v10 & ~(v10 >> 31)) - 255) & (((v10 & ~(v10 >> 31)) - 255) >> 31)) + 255) >> 3) & 0x1F;
    *v6 = v9;
    result = ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
    *v6 = result | v9;
  }
  return result;
}
