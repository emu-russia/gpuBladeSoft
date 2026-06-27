void __cdecl sub_6F85072D(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
  int v11; // [sp+1Ch] [bp-2Ch]@3
  int v12; // [sp+20h] [bp-28h]@3
  int v13; // [sp+24h] [bp-24h]@3
  int v14; // [sp+28h] [bp-20h]@3
  int v15; // [sp+2Ch] [bp-1Ch]@3
  int v16; // [sp+30h] [bp-18h]@3
  int v17; // [sp+34h] [bp-14h]@3
  int v18; // [sp+38h] [bp-10h]@3
  int v19; // [sp+3Ch] [bp-Ch]@3

  if ( a1 && a2 )
  {
    v11 = a3;
    v12 = a4;
    v13 = a5;
    v14 = a6;
    v15 = a7;
    v16 = a8;
    v17 = a9;
    v18 = a10;
    v19 = a11;
    if ( sub_6F835FEB(a1, a2 + 40, (int)&v11, 2) )
      *(_WORD *)(a2 + 114) |= 0x10u;
    sub_6F834FA7(a1, a2);
  }
}
