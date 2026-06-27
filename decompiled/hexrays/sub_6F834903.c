signed int __cdecl sub_6F834903(int a1, int a2)
{
  signed int result; // eax@2
  _BYTE *v3; // eax@12
  int v4; // eax@13
  int v5; // eax@15
  _BYTE *v6; // eax@16
  int v7; // eax@17
  _BYTE *v8; // eax@18
  int v9; // eax@19
  _BYTE *v10; // eax@20
  int v11; // eax@21
  _BYTE *v12; // eax@22
  char v13; // [sp+17h] [bp-11h]@12
  unsigned int v14; // [sp+1Ch] [bp-Ch]@12

  if ( a1 )
  {
    if ( *(_WORD *)a2 <= 0x270Fu
      && *(_BYTE *)(a2 + 2)
      && *(_BYTE *)(a2 + 2) <= 0xCu
      && *(_BYTE *)(a2 + 3)
      && *(_BYTE *)(a2 + 3) <= 0x1Fu
      && *(_BYTE *)(a2 + 4) <= 0x17u
      && *(_BYTE *)(a2 + 5) <= 0x3Bu
      && *(_BYTE *)(a2 + 6) <= 0x3Cu )
    {
      v14 = 0;
      v3 = sub_6F8390DC((unsigned int)&v13, (int)&v14, 1u, *(_BYTE *)(a2 + 3));
      v14 = sub_6F839081(a1, 0x1Du, v14, v3);
      if ( v14 <= 0x1B )
      {
        v4 = v14++;
        *(_BYTE *)(a1 + v4) = 32;
      }
      v14 = sub_6F839081(a1, 0x1Du, v14, &byte_6FB99880[4 * (*(_BYTE *)(a2 + 2) - 1)]);
      if ( v14 <= 0x1B )
      {
        v5 = v14++;
        *(_BYTE *)(a1 + v5) = 32;
      }
      v6 = sub_6F8390DC((unsigned int)&v13, (int)&v14, 1u, *(_WORD *)a2);
      v14 = sub_6F839081(a1, 0x1Du, v14, v6);
      if ( v14 <= 0x1B )
      {
        v7 = v14++;
        *(_BYTE *)(a1 + v7) = 32;
      }
      v8 = sub_6F8390DC((unsigned int)&v13, (int)&v14, 2u, *(_BYTE *)(a2 + 4));
      v14 = sub_6F839081(a1, 0x1Du, v14, v8);
      if ( v14 <= 0x1B )
      {
        v9 = v14++;
        *(_BYTE *)(a1 + v9) = 58;
      }
      v10 = sub_6F8390DC((unsigned int)&v13, (int)&v14, 2u, *(_BYTE *)(a2 + 5));
      v14 = sub_6F839081(a1, 0x1Du, v14, v10);
      if ( v14 <= 0x1B )
      {
        v11 = v14++;
        *(_BYTE *)(a1 + v11) = 58;
      }
      v12 = sub_6F8390DC((unsigned int)&v13, (int)&v14, 2u, *(_BYTE *)(a2 + 6));
      v14 = sub_6F839081(a1, 0x1Du, v14, v12);
      sub_6F839081(a1, 0x1Du, v14, " +0000");
      result = 1;
    }
    else
    {
      result = 0;
    }
  }
  else
  {
    result = 0;
  }
  return result;
}
