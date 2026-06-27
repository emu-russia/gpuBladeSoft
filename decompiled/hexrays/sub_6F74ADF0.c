signed int __usercall sub_6F74ADF0@<eax>(_DWORD *a1@<ebp>)
{
  signed int result; // eax@1
  char v2; // [sp+3Ch] [bp-4h]@1
  char v3; // [sp+40h] [bp+0h]@2
  char v4; // [sp+44h] [bp+4h]@1
  char v5; // [sp+48h] [bp+8h]@1
  char v6; // [sp+4Ch] [bp+Ch]@1
  char v7; // [sp+50h] [bp+10h]@1
  int v8; // [sp+54h] [bp+14h]@1
  char v9; // [sp+58h] [bp+18h]@1
  char v10; // [sp+5Ch] [bp+1Ch]@1

  result = sub_6F732840(
             (signed __int16)(32 * word_70041E80) >> 5,
             (signed __int16)(32 * word_70041E82) >> 5,
             (signed __int16)(32 * word_70041E84) >> 5,
             (signed __int16)(32 * word_70041E86) >> 5,
             (signed __int16)(32 * word_70041E88) >> 5,
             (signed __int16)(32 * word_70041E8A) >> 5,
             &v8,
             &v5,
             &v2,
             &v9,
             &v6,
             a1,
             &v10,
             &v7,
             &v4);
  if ( result )
    result = sub_6F732840(
               (signed __int16)(32 * word_70041E84) >> 5,
               (signed __int16)(32 * word_70041E86) >> 5,
               (signed __int16)(32 * word_70041E88) >> 5,
               (signed __int16)(32 * word_70041E8A) >> 5,
               (signed __int16)(32 * word_70041E8C) >> 5,
               (signed __int16)(32 * word_70041E8E) >> 5,
               &v8,
               &v5,
               &v2,
               &v9,
               &v6,
               &v3,
               &v10,
               &v7,
               &v4) != 0;
  return result;
}
