void __cdecl sub_6F83C41F(int a1, int a2)
{
  unsigned int v2; // [sp+18h] [bp-10h]@7
  int v3; // [sp+1Ch] [bp-Ch]@7

  if ( a1 )
  {
    if ( !sub_6F834CDB(a1, 0x49444154u) )
      sub_6F84FDF0(a1);
    if ( *(_BYTE *)(a1 + 343) == 3 && *(_DWORD *)(a1 + 332) > (signed int)*(_WORD *)(a1 + 328) )
      sub_6F839519(a1, "Read palette index exceeding num_palette");
    do
    {
      v3 = sub_6F84A670(a1);
      v2 = *(_DWORD *)(a1 + 284);
      if ( v2 == 1229472850 )
      {
        sub_6F84B198(a1, a2, v3);
      }
      else if ( v2 == 1229278788 )
      {
        sub_6F84B66A(a1, a2, v3);
      }
      else if ( sub_6F834CDB(a1, v2) )
      {
        if ( v2 == 1229209940 && (v3 || *(_DWORD *)(a1 + 116) & 0x2000) )
          sub_6F839519(a1, "Too many IDATs found");
        sub_6F84E697(a1, a2, v3);
        if ( v2 == 1347179589 )
          *(_DWORD *)(a1 + 116) |= 2u;
      }
      else
      {
        switch ( v2 )
        {
          case 0x49444154u:
            if ( v3 || *(_DWORD *)(a1 + 116) & 0x2000 )
              sub_6F839519(a1, "Too many IDATs found");
            sub_6F84A77C(a1, v3);
            break;
          case 0x504C5445u:
            sub_6F84B3DA(a1, a2, v3);
            break;
          case 0x624B4744u:
            sub_6F84CC8B(a1, a2, v3);
            break;
          case 0x6348524Du:
            sub_6F84B9D3(a1, a2, v3);
            break;
          case 0x67414D41u:
            sub_6F84B6DB(a1, a2, v3);
            break;
          case 0x68495354u:
            sub_6F84CF86(a1, a2, v3);
            break;
          case 0x6F464673u:
            sub_6F84D2A1(a1, a2, v3);
            break;
          case 0x7043414Cu:
            sub_6F84D4AC(a1, a2, v3);
            break;
          case 0x7343414Cu:
            sub_6F84D8E5(a1, a2, v3);
            break;
          case 0x70485973u:
            sub_6F84D10C(a1, a2, v3);
            break;
          case 0x73424954u:
            sub_6F84B7E1(a1, a2, v3);
            break;
          case 0x73524742u:
            sub_6F84BC70(a1, a2, v3);
            break;
          case 0x69434350u:
            sub_6F84BDD3(a1, a2, v3);
            break;
          case 0x73504C54u:
            sub_6F84C4FB(a1, a2, v3);
            break;
          case 0x74455874u:
            sub_6F84DCE4(a1, a2, v3);
            break;
          case 0x74494D45u:
            sub_6F84DBA7(a1, a2, v3);
            break;
          case 0x74524E53u:
            sub_6F84C932(a1, a2, v3);
            break;
          case 0x7A545874u:
            sub_6F84DEC8(a1, a2, v3);
            break;
          case 0x69545874u:
            sub_6F84E16B(a1, a2, v3);
            break;
          default:
            sub_6F84E697(a1, a2, v3);
            break;
        }
      }
    }
    while ( !(*(_DWORD *)(a1 + 116) & 0x10) );
  }
}
