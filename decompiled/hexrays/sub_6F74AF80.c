BOOL __usercall sub_6F74AF80@<eax>(_DWORD *a1@<ebp>)
{
  char v2; // [sp+3Ch] [bp-14h]@1
  int v3; // [sp+40h] [bp-10h]@1
  char v4; // [sp+44h] [bp-Ch]@1
  char v5; // [sp+48h] [bp-8h]@1
  int v6; // [sp+4Ch] [bp-4h]@1
  char v7; // [sp+54h] [bp+4h]@1
  int v8; // [sp+58h] [bp+8h]@1
  int v9; // [sp+5Ch] [bp+Ch]@1

  return sub_6F732840(
           (signed __int16)(32 * word_70041E80) >> 5,
           (signed __int16)(32 * word_70041E82) >> 5,
           (signed __int16)(32 * word_70041E84) >> 5,
           (signed __int16)(32 * word_70041E86) >> 5,
           (signed __int16)(32 * word_70041E88) >> 5,
           (signed __int16)(32 * word_70041E8A) >> 5,
           (signed int *)&v7,
           &v5,
           &v2,
           &v8,
           &v6,
           &v3,
           &v9,
           a1,
           &v4) != 0;
}
