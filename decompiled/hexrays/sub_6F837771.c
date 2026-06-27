BOOL __cdecl sub_6F837771(int a1, unsigned int a2, int *a3, int *a4)
{
  signed int v5; // [sp+4h] [bp-Ch]@3
  unsigned int v6; // [sp+8h] [bp-8h]@1
  int v7; // [sp+Ch] [bp-4h]@1

  v7 = *a3;
  v6 = *a4;
  while ( 2 )
  {
    if ( v6 < a2 )
    {
      switch ( *(_BYTE *)(a1 + v6) )
      {
        case 43:
          v5 = 4;
          goto LABEL_9;
        case 45:
          v5 = 132;
          goto LABEL_9;
        case 46:
          v5 = 16;
          goto LABEL_9;
        case 48:
          v5 = 8;
          goto LABEL_9;
        case 49:
        case 50:
        case 51:
        case 52:
        case 53:
        case 54:
        case 55:
        case 56:
        case 57:
          v5 = 264;
          goto LABEL_9;
        case 69:
        case 101:
          v5 = 32;
LABEL_9:
          switch ( (v7 & 3) + (v5 & 0x3C) )
          {
            case 4:
              if ( !(v7 & 0x3C) )
              {
                v7 |= v5;
                goto LABEL_27;
              }
              goto LABEL_29;
            case 0x10:
              if ( !(v7 & 0x10) )
              {
                if ( v7 & 8 )
                  v7 |= v5;
                else
                  v7 = v5 | 1 | v7 & 0x1C0;
                goto LABEL_27;
              }
              goto LABEL_29;
            case 8:
              if ( v7 & 0x10 )
                v7 = v7 & 0x1C0 | 0x11;
              v7 |= v5 | 0x40;
              goto LABEL_27;
            case 0x20:
              if ( !(v7 & 8) )
                goto LABEL_29;
              v7 = v7 & 0x1C0 | 2;
              goto LABEL_27;
            case 9:
              v7 |= v5 | 0x40;
              goto LABEL_27;
            case 0x21:
              if ( !(v7 & 8) )
                goto LABEL_29;
              v7 = v7 & 0x1C0 | 2;
              goto LABEL_27;
            case 6:
              if ( v7 & 0x3C )
                goto LABEL_29;
              v7 |= 4u;
              goto LABEL_27;
            case 0xA:
              v7 |= 0x48u;
LABEL_27:
              ++v6;
              continue;
            default:
              goto LABEL_29;
          }
        default:
          goto LABEL_29;
      }
    }
    break;
  }
LABEL_29:
  *a3 = v7;
  *a4 = v6;
  return (v7 & 8) != 0;
}
