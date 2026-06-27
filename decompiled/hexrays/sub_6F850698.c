void __cdecl sub_6F850698(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10; // [sp+10h] [bp-28h]@3
  int v11; // [sp+14h] [bp-24h]@3
  int v12; // [sp+18h] [bp-20h]@3
  int v13; // [sp+1Ch] [bp-1Ch]@3
  int v14; // [sp+20h] [bp-18h]@3
  int v15; // [sp+24h] [bp-14h]@3
  int v16; // [sp+28h] [bp-10h]@3
  int v17; // [sp+2Ch] [bp-Ch]@3

  if ( a1 && a2 )
  {
    v10 = a5;
    v11 = a6;
    v12 = a7;
    v13 = a8;
    v14 = a9;
    v15 = a10;
    v16 = a3;
    v17 = a4;
    if ( sub_6F835F47(a1, a2 + 40, (int)&v10, 2) )
      *(_WORD *)(a2 + 114) |= 0x10u;
    sub_6F834FA7(a1, a2);
  }
}
