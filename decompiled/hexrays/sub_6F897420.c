_DWORD *__usercall sub_6F897420@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v3; // esi@2
  int v4; // ebx@2
  _DWORD *result; // eax@5

  if ( a2 )
  {
    v3 = a1;
    v4 = a2;
    do
    {
      if ( *(_DWORD *)v4 > 0x4Bu )
      {
LABEL_5:
        result = sub_6F897420(v3, *(_DWORD *)(v4 + 8), a3);
        if ( result )
          return result;
      }
      else
      {
        switch ( *(_DWORD *)v4 )
        {
          case 0:
          case 6:
          case 0x18:
          case 0x27:
          case 0x2C:
          case 0x31:
          case 0x40:
          case 0x41:
          case 0x45:
          case 0x46:
          case 0x47:
          case 0x4A:
          case 0x4B:
            goto LABEL_7;
          case 1:
          case 2:
          case 3:
          case 4:
          case 9:
          case 0xA:
          case 0xB:
          case 0xC:
          case 0xD:
          case 0xE:
          case 0xF:
          case 0x10:
          case 0x11:
          case 0x12:
          case 0x13:
          case 0x14:
          case 0x15:
          case 0x16:
          case 0x17:
          case 0x19:
          case 0x1A:
          case 0x1B:
          case 0x1C:
          case 0x1D:
          case 0x1E:
          case 0x1F:
          case 0x20:
          case 0x21:
          case 0x22:
          case 0x23:
          case 0x24:
          case 0x25:
          case 0x26:
          case 0x28:
          case 0x29:
          case 0x2A:
          case 0x2B:
          case 0x2D:
          case 0x2E:
          case 0x2F:
          case 0x30:
          case 0x33:
          case 0x34:
          case 0x35:
          case 0x36:
          case 0x37:
          case 0x38:
          case 0x39:
          case 0x3A:
          case 0x3B:
          case 0x3C:
          case 0x3D:
          case 0x3E:
          case 0x3F:
          case 0x42:
          case 0x43:
          case 0x44:
          case 0x48:
          case 0x49:
            goto LABEL_5;
          case 5:
            result = (_DWORD *)sub_6F8973F0(v3, (int *)(v4 + 8));
            if ( result && *result == 47 )
              return result;
            goto LABEL_7;
          case 7:
          case 8:
          case 0x32:
            break;
        }
      }
      v4 = *(_DWORD *)(v4 + 12);
    }
    while ( v4 );
LABEL_7:
    result = 0;
  }
  else
  {
    result = 0;
  }
  return result;
}
