unsigned int __cdecl sub_6F8384A3(int a1, int *a2, int a3, signed int a4)
{
  void **v4; // ebx@2
  double v5; // st7@4
  unsigned int result; // eax@13
  _WORD *v7; // [sp+2Ch] [bp-2Ch]@2
  int v8; // [sp+30h] [bp-28h]@1
  unsigned int v9; // [sp+38h] [bp-20h]@1
  unsigned int v10; // [sp+40h] [bp-18h]@8
  unsigned int k; // [sp+44h] [bp-14h]@7
  unsigned int j; // [sp+48h] [bp-10h]@3
  unsigned int i; // [sp+4Ch] [bp-Ch]@1

  v9 = (1 << (16 - a3)) - 1;
  *a2 = (int)sub_6F83B307(a1, 4 * (1 << (8 - a3)));
  v8 = *a2;
  for ( i = 0; ; ++i )
  {
    result = i;
    if ( i >= 1 << (8 - a3) )
      break;
    v4 = (void **)(4 * i + v8);
    *v4 = sub_6F83B4D4(a1, 0x200u);
    v7 = *v4;
    if ( sub_6F83823E(a4) )
    {
      for ( j = 0; j <= 0xFF; ++j )
      {
        v5 = sub_6F8A7290((double)((j << (8 - a3)) + i) / (double)v9, (double)a4 * 0.00001);
        v7[j] = (signed int)sub_6F8A7260(v5 * 65535.0 + 0.5);
      }
    }
    else
    {
      for ( k = 0; k <= 0xFF; ++k )
      {
        v10 = (k << (8 - a3)) + i;
        if ( a3 )
          v10 = (0xFFFF * v10 + (1 << (15 - a3))) / v9;
        v7[k] = v10;
      }
    }
  }
  return result;
}
