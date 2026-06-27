int sub_6F7295E0()
{
  int v0; // eax@1
  int v1; // eax@3
  unsigned int v2; // ecx@4
  int v3; // ebx@4
  int v4; // esi@4
  unsigned int v5; // eax@4
  unsigned int v6; // ecx@6
  int v7; // eax@10
  unsigned int v8; // edx@11
  int v9; // esi@12
  unsigned int v10; // ebx@12
  unsigned int v11; // ecx@14
  int v12; // edx@23
  int v13; // ebx@23
  int v14; // edx@23
  int result; // eax@35
  int v16; // edx@36
  int v17; // ebx@36
  int v18; // edx@40
  int v19; // edx@41

  v0 = dword_6FBB52F8 * dword_6FBB52F4 * dword_6FBB51E0 * dword_6FBB51DC;
  dword_70041EAC = 2 * v0;
  dword_70041EA8 = 4 * v0;
  dword_6FBB5084 = sub_6F7601D0(2 * v0, 0x10u);
  dword_6FBB5068 = dword_6FBB5084;
  if ( !dword_6FBB5084 )
  {
    nullsub_10();
    exit(1);
  }
  dword_6FD400F8 = sub_6F7601D0(dword_70041EA8, 0x10u);
  dword_6FBB505C = dword_6FD400F8;
  if ( !dword_6FD400F8 )
  {
    nullsub_10();
    exit(1);
  }
  v1 = sub_6F7601D0(0x400000, 0x10u);
  dword_6FD400FC = v1;
  if ( !v1 )
    goto LABEL_119;
  v2 = dword_6FBB51E0;
  v3 = v1;
  v4 = dword_6FBB51DC;
  v5 = 0;
  if ( dword_6FBB51E0 )
  {
    do
    {
      if ( v4 )
      {
        v6 = 0;
        do
        {
          *(_DWORD *)(v3 + 4 * v6) = dword_6FBB5068
                                   + 2
                                   * dword_6FBB52F4
                                   * ((v6 & dword_6FD40988) + v4 * dword_6FBB52F8 * (v5 & dword_6FD40984));
          v4 = dword_6FBB51DC;
          ++v6;
        }
        while ( dword_6FBB51DC > v6 );
        v2 = dword_6FBB51E0;
      }
      ++v5;
      v3 += 4096;
    }
    while ( v5 < v2 );
  }
  v7 = sub_6F7601D0(0x400000, 0x10u);
  dword_6FD400F4 = v7;
  if ( !v7 )
  {
LABEL_119:
    nullsub_10();
    exit(1);
  }
  v8 = dword_6FBB51E0;
  if ( dword_6FBB51E0 )
  {
    v9 = dword_6FBB51DC;
    v10 = 0;
    do
    {
      if ( v9 )
      {
        v11 = 0;
        do
        {
          *(_DWORD *)(v7 + 4 * v11) = dword_6FBB505C
                                    + 4
                                    * dword_6FBB52F4
                                    * ((v11 & dword_6FD40988) + v9 * dword_6FBB52F8 * (v10 & dword_6FD40984));
          v9 = dword_6FBB51DC;
          ++v11;
        }
        while ( dword_6FBB51DC > v11 );
        v8 = dword_6FBB51E0;
      }
      ++v10;
      v7 += 4096;
    }
    while ( v10 < v8 );
  }
  dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F721D80;
  dword_6FD3FFB0 = sub_6F71FBF0;
  dword_6FBB51E4 = sub_6F721D50;
  dword_70041EB0 = sub_6F71FBC0;
  if ( dword_6FBB52F4 <= 8 && dword_6FBB52F8 <= 8 )
  {
    switch ( dword_6FBB52F4 + 8 * dword_6FBB52F8 )
    {
      case 72:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F721E00;
        dword_6FD3FFB0 = sub_6F71FC70;
        break;
      case 71:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F721ED0;
        dword_6FD3FFB0 = sub_6F71FD90;
        break;
      case 32:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F7233D0;
        dword_6FD3FFB0 = sub_6F721610;
        break;
      case 33:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F723380;
        dword_6FD3FFB0 = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F7215C0;
        break;
      case 34:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F723330;
        dword_6FD3FFB0 = sub_6F721560;
        break;
      case 35:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F7232C0;
        dword_6FD3FFB0 = sub_6F721500;
        break;
      case 36:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F723260;
        dword_6FD3FFB0 = sub_6F721490;
        break;
      case 37:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F7231F0;
        dword_6FD3FFB0 = sub_6F721410;
        break;
      case 38:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F723180;
        dword_6FD3FFB0 = sub_6F721380;
        break;
      case 39:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F723100;
        dword_6FD3FFB0 = sub_6F7212F0;
        break;
      case 40:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F723080;
        dword_6FD3FFB0 = sub_6F721250;
        break;
      case 41:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F723020;
        dword_6FD3FFB0 = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F7211F0;
        break;
      case 42:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F722FC0;
        dword_6FD3FFB0 = sub_6F721180;
        break;
      case 43:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F722F40;
        dword_6FD3FFB0 = sub_6F721100;
        break;
      case 44:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F722ED0;
        dword_6FD3FFB0 = sub_6F721080;
        break;
      case 45:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F722E40;
        dword_6FD3FFB0 = sub_6F720FF0;
        break;
      case 46:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F722DC0;
        dword_6FD3FFB0 = sub_6F720F50;
        break;
      case 47:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F722D20;
        dword_6FD3FFB0 = sub_6F720EA0;
        break;
      case 48:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F722C90;
        dword_6FD3FFB0 = sub_6F720DE0;
        break;
      case 49:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F722C20;
        dword_6FD3FFB0 = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F720D80;
        break;
      case 50:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F722BB0;
        dword_6FD3FFB0 = sub_6F720D10;
        break;
      case 51:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F722B20;
        dword_6FD3FFB0 = sub_6F720C80;
        break;
      case 52:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F722AA0;
        dword_6FD3FFB0 = sub_6F720BE0;
        break;
      case 53:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F722A00;
        dword_6FD3FFB0 = sub_6F720B30;
        break;
      case 54:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F722970;
        dword_6FD3FFB0 = sub_6F720A70;
        break;
      case 55:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F7228C0;
        dword_6FD3FFB0 = sub_6F7209A0;
        break;
      case 56:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F722820;
        dword_6FD3FFB0 = sub_6F7208C0;
        break;
      case 57:
        dword_6FBB51EC = sub_6F7227B0;
        dword_6FD3FFB0 = sub_6F720850;
        break;
      case 58:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F722740;
        dword_6FD3FFB0 = sub_6F7207D0;
        break;
      case 59:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F7226A0;
        dword_6FD3FFB0 = sub_6F720730;
        break;
      case 60:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F722610;
        dword_6FD3FFB0 = sub_6F720680;
        break;
      case 61:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F722560;
        dword_6FD3FFB0 = sub_6F7205C0;
        break;
      case 62:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F7224C0;
        dword_6FD3FFB0 = sub_6F7204E0;
        break;
      case 63:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F722400;
        dword_6FD3FFB0 = sub_6F7203F0;
        break;
      case 16:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F723900;
        dword_6FD3FFB0 = sub_6F721B90;
        break;
      case 17:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F7238C0;
        dword_6FD3FFB0 = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F721B60;
        break;
      case 18:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F723880;
        dword_6FD3FFB0 = sub_6F721B20;
        break;
      case 19:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F723830;
        dword_6FD3FFB0 = sub_6F721AE0;
        break;
      case 20:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F7237F0;
        dword_6FD3FFB0 = sub_6F721A90;
        break;
      case 21:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F7237A0;
        dword_6FD3FFB0 = sub_6F721A40;
        break;
      case 22:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F723750;
        dword_6FD3FFB0 = sub_6F7219F0;
        break;
      case 23:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F7236F0;
        dword_6FD3FFB0 = sub_6F721990;
        break;
      case 24:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F7236A0;
        dword_6FD3FFB0 = sub_6F721930;
        break;
      case 25:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F723660;
        dword_6FD3FFB0 = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F7218F0;
        break;
      case 26:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F723610;
        dword_6FD3FFB0 = sub_6F7218A0;
        break;
      case 27:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F7235B0;
        dword_6FD3FFB0 = sub_6F721850;
        break;
      case 28:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F723560;
        dword_6FD3FFB0 = sub_6F7217F0;
        break;
      case 29:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F723500;
        dword_6FD3FFB0 = sub_6F721780;
        break;
      case 30:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F7234A0;
        dword_6FD3FFB0 = sub_6F721710;
        break;
      case 31:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F723430;
        dword_6FD3FFB0 = sub_6F721690;
        break;
      case 9:
        dword_6FBB51EC = sub_6F723AB0;
        dword_6FD3FFB0 = sub_6F721D20;
        break;
      case 10:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F723A80;
        dword_6FD3FFB0 = sub_6F721CF0;
        break;
      case 11:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F723A40;
        dword_6FD3FFB0 = sub_6F721CC0;
        break;
      case 12:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F723A00;
        dword_6FD3FFB0 = sub_6F721C90;
        break;
      case 13:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F7239C0;
        dword_6FD3FFB0 = sub_6F721C50;
        break;
      case 14:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F723980;
        dword_6FD3FFB0 = sub_6F721C10;
        break;
      case 15:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F723940;
        dword_6FD3FFB0 = sub_6F721BD0;
        break;
      case 64:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F722350;
        dword_6FD3FFB0 = sub_6F7202F0;
        break;
      case 65:
        dword_6FBB51EC = sub_6F7222D0;
        dword_6FD3FFB0 = sub_6F720270;
        break;
      case 66:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F722250;
        dword_6FD3FFB0 = sub_6F7201E0;
        break;
      case 67:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F7221B0;
        dword_6FD3FFB0 = sub_6F720130;
        break;
      case 68:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F722110;
        dword_6FD3FFB0 = sub_6F720070;
        break;
      case 69:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F722050;
        dword_6FD3FFB0 = sub_6F71FF90;
        break;
      case 70:
        dword_6FBB51EC = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_6F721FA0;
        dword_6FD3FFB0 = sub_6F71FEA0;
        break;
      default:
        break;
    }
  }
  switch ( dword_6FBB530C )
  {
    case 11:
    case 12:
    case 13:
      v12 = dword_6FBB51DC * dword_6FBB52F8 * dword_6FBB52F4 * v8;
      v13 = 4 * v12;
      v14 = v12 << 6;
      dword_70041EA4 = v13;
      dword_70041EA0 = v14;
      break;
    case 14:
      v16 = dword_6FBB51DC * v8;
      v17 = v16;
      v14 = dword_6FBB52F8 * dword_6FBB52F4 * (v16 & 0x3FFFFFFF);
      v13 = 4 * dword_6FBB52F8 * dword_6FBB52F4 * v17;
      dword_70041EA4 = v13;
      dword_70041EA0 = v14;
      if ( v13 )
        goto LABEL_37;
      goto LABEL_25;
    case 0:
      dword_70041EA4 = 0;
      v14 = 16 * dword_6FBB52F8 * dword_6FBB51DC * dword_6FBB52F4 * v8;
      dword_70041EA0 = v14;
      goto LABEL_25;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      v18 = dword_6FBB51DC * dword_6FBB52F8 * dword_6FBB52F4 * v8;
      v13 = 4 * v18;
      v14 = 16 * v18;
      dword_70041EA4 = v13;
      dword_70041EA0 = v14;
      break;
    case 8:
    case 9:
    case 10:
      v19 = dword_6FBB51DC * dword_6FBB52F8 * dword_6FBB52F4 * v8;
      v13 = 4 * v19;
      v14 = 36 * v19;
      dword_70041EA4 = v13;
      dword_70041EA0 = v14;
      break;
    default:
      nullsub_10();
      exit(1);
      return result;
  }
  if ( v13 )
  {
LABEL_37:
    dword_6FD400F0 = sub_6F7601D0(v13, 0x10u);
    if ( !dword_6FD400F0 )
    {
      nullsub_10();
      exit(1);
    }
    v14 = dword_70041EA0;
  }
LABEL_25:
  if ( v14 )
  {
    dword_6FD400EC = sub_6F7601D0(v14, 0x10u);
    if ( !dword_6FD400EC )
    {
      nullsub_10();
      exit(1);
    }
  }
  if ( dword_6FBB5084 )
    memset((void *)dword_6FBB5084, 0, dword_70041EAC);
  if ( dword_6FD400F8 )
    memset((void *)dword_6FD400F8, 0, dword_70041EA8);
  if ( dword_6FD400F0 )
    memset((void *)dword_6FD400F0, 0, dword_70041EA4);
  if ( dword_6FD400EC )
    memset((void *)dword_6FD400EC, 0, dword_70041EA0);
  return 0;
}
