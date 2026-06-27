double __cdecl sub_6F8A1F40(int a1, int a2)
{
  char v2; // al@1
  double v4; // [sp+28h] [bp-24h]@0
  int v5; // [sp+34h] [bp-18h]@1
  double v6; // [sp+38h] [bp-14h]@1

  v2 = sub_6F8A7F20((_BYTE *)a1, (_DWORD *)a2, (int)&unk_6FB48A48, &v5, (int)&v6);
  switch ( v2 & 7 )
  {
    case 5:
      *(_QWORD *)&v4 = *(_QWORD *)&v6 | 0x7FF0000000000000i64;
      break;
    case 4:
      v4 = 2.696539702293474e308/*NaN*/;
      break;
    case 0:
    case 6:
      v4 = 0.0;
      break;
    case 1:
      LODWORD(v4) = LODWORD(v6);
      HIDWORD(v4) = HIDWORD(v6) & 0xFFEFFFFF | ((v5 + 1075) << 20);
      break;
    case 2:
      v4 = v6;
      break;
    case 3:
      v4 = 1.797693134862316e308/*+Inf*/;
      break;
    default:
      break;
  }
  if ( v2 & 8 )
    HIDWORD(v4) |= 0x80000000;
  return v4;
}
