int __usercall sub_6F896B60@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4)
{
  int v4; // esi@3
  int v5; // ebx@4
  int result; // eax@4

  switch ( a2 )
  {
    case 9:
    case 10:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 34:
    case 35:
    case 36:
    case 37:
    case 38:
    case 40:
    case 51:
    case 52:
    case 53:
    case 59:
    case 62:
    case 66:
    case 67:
    case 68:
    case 72:
    case 73:
    case 74:
      if ( !a3 )
        goto LABEL_7;
      goto LABEL_3;
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
    case 32:
    case 41:
    case 46:
    case 47:
    case 76:
    case 78:
    case 79:
      goto LABEL_3;
    case 1:
    case 2:
    case 3:
    case 4:
    case 11:
    case 33:
    case 43:
    case 45:
    case 54:
    case 55:
    case 56:
    case 57:
    case 58:
    case 60:
    case 61:
    case 63:
    case 75:
    case 77:
      if ( a3 )
        goto LABEL_6;
      goto LABEL_7;
    case 42:
    case 48:
LABEL_6:
      if ( !a4 )
        goto LABEL_7;
LABEL_3:
      v4 = *(_DWORD *)(a1 + 20);
      if ( v4 >= *(_DWORD *)(a1 + 24) )
        goto LABEL_7;
      v5 = *(_DWORD *)(a1 + 16) + 16 * *(_DWORD *)(a1 + 20);
      *(_DWORD *)(v5 + 4) = 0;
      *(_DWORD *)(a1 + 20) = v4 + 1;
      *(_DWORD *)v5 = a2;
      *(_DWORD *)(v5 + 12) = a4;
      result = v5;
      *(_DWORD *)(v5 + 8) = a3;
      break;
    default:
LABEL_7:
      result = 0;
      break;
  }
  return result;
}
