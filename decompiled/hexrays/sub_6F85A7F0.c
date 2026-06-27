int __cdecl sub_6F85A7F0(int a1, char a2, const char *a3, const char *a4)
{
  int result; // eax@2
  char v5[64]; // [sp+14h] [bp-54h]@3
  int v6; // [sp+54h] [bp-14h]@1
  size_t v7; // [sp+58h] [bp-10h]@1
  size_t v8; // [sp+5Ch] [bp-Ch]@1

  v8 = strlen(a3);
  v7 = strlen(a4);
  v6 = v8 + v7 + 2;
  if ( (unsigned int)v6 <= 0x40 )
  {
    v5[0] = a2;
    memcpy(&v5[1], a3, v8 + 1);
    memcpy(&v5[v8 + 2], a4, v7);
    result = sub_6F858229(a1, 0x7343414Cu, (int)v5, v6);
  }
  else
  {
    result = sub_6F839262(a1, "Can't write sCAL (buffer too small)");
  }
  return result;
}
