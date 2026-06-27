void __cdecl sub_6F84B198(int a1, int a2, int a3)
{
  int v3; // eax@5
  unsigned int v4; // eax@13
  char v5; // [sp+37h] [bp-31h]@5
  char v6; // [sp+3Bh] [bp-2Dh]@5
  unsigned __int8 v7; // [sp+3Fh] [bp-29h]@5
  unsigned __int8 v8; // [sp+40h] [bp-28h]@5
  unsigned __int8 v9; // [sp+41h] [bp-27h]@5
  unsigned __int8 v10; // [sp+42h] [bp-26h]@5
  unsigned __int8 v11; // [sp+43h] [bp-25h]@5
  int v12; // [sp+44h] [bp-24h]@5
  int v13; // [sp+48h] [bp-20h]@5
  int v14; // [sp+4Ch] [bp-1Ch]@5
  int v15; // [sp+50h] [bp-18h]@5
  int v16; // [sp+54h] [bp-14h]@5
  int v17; // [sp+58h] [bp-10h]@5
  int v18; // [sp+5Ch] [bp-Ch]@5

  if ( *(_DWORD *)(a1 + 116) & 1 )
    sub_6F83979A(a1, (int)"out of place");
  if ( a3 != 13 )
    sub_6F83979A(a1, (int)"invalid");
  *(_DWORD *)(a1 + 116) |= 1u;
  sub_6F84A73A(a1, (int)&v5, 13);
  sub_6F84A77C(a1, 0);
  v18 = sub_6F84A3D0(a1, (int)&v5);
  v17 = sub_6F84A3D0(a1, (int)&v6);
  v16 = v7;
  v15 = v8;
  v14 = v9;
  v13 = v10;
  v12 = v11;
  *(_DWORD *)(a1 + 256) = v18;
  *(_DWORD *)(a1 + 260) = v17;
  *(_BYTE *)(a1 + 344) = v16;
  *(_BYTE *)(a1 + 340) = v12;
  *(_BYTE *)(a1 + 343) = v15;
  *(_BYTE *)(a1 + 620) = v13;
  *(_BYTE *)(a1 + 652) = v14;
  v3 = *(_BYTE *)(a1 + 343);
  switch ( v3 )
  {
    case 4:
      *(_BYTE *)(a1 + 347) = 2;
      break;
    case 6:
      *(_BYTE *)(a1 + 347) = 4;
      break;
    case 2:
      *(_BYTE *)(a1 + 347) = 3;
      break;
    default:
      *(_BYTE *)(a1 + 347) = 1;
      break;
  }
  *(_BYTE *)(a1 + 346) = *(_BYTE *)(a1 + 347) * *(_BYTE *)(a1 + 344);
  if ( *(_BYTE *)(a1 + 346) <= 7u )
    v4 = (*(_DWORD *)(a1 + 256) * (unsigned int)*(_BYTE *)(a1 + 346) + 7) >> 3;
  else
    v4 = *(_DWORD *)(a1 + 256) * (unsigned __int8)(*(_BYTE *)(a1 + 346) >> 3);
  *(_DWORD *)(a1 + 272) = v4;
  sub_6F850CC3(a1, a2, v18, v17, v16, v15, v12, v14, v13);
}
