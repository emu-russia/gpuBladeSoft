int __usercall sub_6F89E760@<eax>(int result@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v3; // edi@1
  int v4; // ebp@1
  int v5; // ebx@1
  int v6; // eax@3
  int v7; // edx@3
  int v8; // eax@4
  const char *v9; // esi@6
  char i; // dl@6
  int v11; // ecx@7
  int v12; // eax@11
  char v13; // ST1F_1@11
  int v14; // edx@16
  int v15; // edx@19
  int v16; // eax@22
  char *v17; // esi@27
  char j; // dl@27
  int v19; // ecx@28
  int v20; // eax@32
  char v21; // ST1F_1@32
  char *v22; // esi@33
  char k; // dl@33
  int v24; // ecx@34
  int v25; // eax@38
  char v26; // ST1F_1@38
  int v27; // edx@40
  int v28; // eax@41
  signed int v29; // eax@44
  char *v30; // esi@44
  char l; // dl@44
  signed int v32; // ecx@45
  int v33; // eax@49
  char v34; // ST1F_1@49
  char *v35; // esi@50
  char m; // dl@50
  int v37; // ecx@51
  int v38; // eax@55
  char v39; // ST1F_1@55
  char *v40; // esi@56
  char n; // dl@56
  int v42; // ecx@57
  int v43; // eax@61
  char v44; // ST1F_1@61
  char *v45; // esi@62
  char ii; // dl@62
  int v47; // ecx@63
  int v48; // eax@67
  char v49; // ST1F_1@67
  const char *v50; // esi@69
  char jj; // dl@69
  int v52; // ecx@70
  int v53; // eax@74
  char v54; // ST1F_1@74
  char *v55; // esi@75
  char kk; // cl@75
  int v57; // edx@76
  int v58; // eax@80
  char v59; // ST1F_1@80
  char *v60; // esi@81
  char ll; // dl@81
  int v62; // ecx@82
  int v63; // eax@86
  char v64; // ST1F_1@86
  char *v65; // esi@87
  char mm; // dl@87
  int v67; // ecx@88
  int v68; // eax@92
  char v69; // ST1F_1@92
  int v70; // ecx@93
  int v71; // edx@94
  int v72; // eax@95
  int v73; // ecx@97
  int v74; // edx@97
  int v75; // eax@98

  v3 = a3;
  v4 = a2;
  v5 = result;
  switch ( *(_DWORD *)a3 )
  {
    case 0x2B:
      if ( *(_BYTE *)(result + 260) != 40 )
      {
        v6 = *(_DWORD *)(result + 256);
        v7 = v6 + 1;
        if ( v6 == 255 )
        {
          v8 = *(_DWORD *)(v5 + 268);
          *(_BYTE *)(v5 + 255) = 0;
          (*(void (__fastcall **)(int, int))(v5 + 264))(a3, v7);
          ++*(_DWORD *)(v5 + 296);
          v7 = 1;
          v6 = 0;
        }
        *(_DWORD *)(v5 + 256) = v7;
        *(_BYTE *)(v5 + v6) = 32;
        *(_BYTE *)(v5 + 260) = 32;
      }
      v9 = "::*";
      sub_6F899DD0(v5, v4, *(_DWORD *)(v3 + 8));
      result = *(_DWORD *)(v5 + 256);
      for ( i = 58; ; i = *v9 )
      {
        if ( result == 255 )
        {
          v12 = *(_DWORD *)(v5 + 268);
          *(_BYTE *)(v5 + 255) = 0;
          v13 = i;
          (*(void (__cdecl **)(int, signed int, int))(v5 + 264))(v5, 255, v12);
          ++*(_DWORD *)(v5 + 296);
          result = 1;
          v11 = 0;
          i = v13;
        }
        else
        {
          v11 = result++;
        }
        ++v9;
        *(_DWORD *)(v5 + 256) = result;
        *(_BYTE *)(v5 + v11) = i;
        *(_BYTE *)(v5 + 260) = i;
        if ( "" == v9 )
          break;
      }
      return result;
    case 3:
      a3 = *(_DWORD *)(a3 + 8);
      return sub_6F899DD0(result, a2, a3);
    default:
      return sub_6F899DD0(result, a2, a3);
    case 0x1F:
      if ( *(_DWORD *)(result + 256) == 255 )
      {
        *(_BYTE *)(result + 255) = 0;
        (*(void (__cdecl **)(int, signed int, _DWORD))(result + 264))(result, 255, *(_DWORD *)(result + 268));
        ++*(_DWORD *)(v5 + 296);
        *(_DWORD *)(v5 + 256) = 0;
      }
      v14 = *(_DWORD *)(v5 + 256);
      result = v14 + 1;
      *(_DWORD *)(v5 + 256) = v14 + 1;
      *(_BYTE *)(v5 + v14) = 32;
      *(_BYTE *)(v5 + 260) = 32;
      goto LABEL_40;
    case 0x20:
      if ( *(_DWORD *)(result + 256) == 255 )
      {
        *(_BYTE *)(result + 255) = 0;
        (*(void (__cdecl **)(int, signed int, _DWORD))(result + 264))(result, 255, *(_DWORD *)(result + 268));
        ++*(_DWORD *)(v5 + 296);
        *(_DWORD *)(v5 + 256) = 0;
      }
      v15 = *(_DWORD *)(v5 + 256);
      result = v15 + 1;
      *(_DWORD *)(v5 + 256) = v15 + 1;
      *(_BYTE *)(v5 + v15) = 32;
      *(_BYTE *)(v5 + 260) = 32;
      goto LABEL_69;
    case 0x21:
      if ( *(_DWORD *)(result + 256) == 255 )
      {
        *(_BYTE *)(result + 255) = 0;
        (*(void (__cdecl **)(int, signed int, _DWORD))(result + 264))(result, 255, *(_DWORD *)(result + 268));
        ++*(_DWORD *)(v5 + 296);
        *(_DWORD *)(v5 + 256) = 0;
      }
      v16 = *(_DWORD *)(v5 + 256);
      *(_DWORD *)(v5 + 256) = v16 + 1;
      a2 = v4;
      *(_BYTE *)(v5 + v16) = 32;
      result = v5;
      *(_BYTE *)(v5 + 260) = 32;
      a3 = *(_DWORD *)(v3 + 12);
      return sub_6F899DD0(result, a2, a3);
    case 0x22:
      if ( !(a2 & 4) )
      {
        if ( *(_DWORD *)(result + 256) == 255 )
        {
          *(_BYTE *)(result + 255) = 0;
          (*(void (__cdecl **)(int, signed int, _DWORD))(result + 264))(result, 255, *(_DWORD *)(result + 268));
          ++*(_DWORD *)(v5 + 296);
          *(_DWORD *)(v5 + 256) = 0;
        }
        result = *(_DWORD *)(v5 + 256);
        *(_DWORD *)(v5 + 256) = result + 1;
        *(_BYTE *)(v5 + result) = 42;
        *(_BYTE *)(v5 + 260) = 42;
      }
      return result;
    case 0x25:
      result = *(_DWORD *)(result + 256);
      v17 = "omplex ";
      for ( j = 99; ; j = *v17++ )
      {
        if ( result == 255 )
        {
          v20 = *(_DWORD *)(v5 + 268);
          *(_BYTE *)(v5 + 255) = 0;
          v21 = j;
          (*(void (__cdecl **)(int, signed int, int))(v5 + 264))(v5, 255, v20);
          ++*(_DWORD *)(v5 + 296);
          result = 1;
          v19 = 0;
          j = v21;
        }
        else
        {
          v19 = result++;
        }
        *(_DWORD *)(v5 + 256) = result;
        *(_BYTE *)(v5 + v19) = j;
        *(_BYTE *)(v5 + 260) = j;
        if ( v17 == "" )
          break;
      }
      return result;
    case 0x26:
      result = *(_DWORD *)(result + 256);
      v22 = "maginary ";
      for ( k = 105; ; k = *v22++ )
      {
        if ( result == 255 )
        {
          v25 = *(_DWORD *)(v5 + 268);
          *(_BYTE *)(v5 + 255) = 0;
          v26 = k;
          (*(void (__cdecl **)(int, signed int, int))(v5 + 264))(v5, 255, v25);
          ++*(_DWORD *)(v5 + 296);
          result = 1;
          v24 = 0;
          k = v26;
        }
        else
        {
          v24 = result++;
        }
        *(_DWORD *)(v5 + 256) = result;
        *(_BYTE *)(v5 + v24) = k;
        *(_BYTE *)(v5 + 260) = k;
        if ( "" == v22 )
          break;
      }
      return result;
    case 0x23:
      result = *(_DWORD *)(result + 256);
LABEL_40:
      v27 = result + 1;
      if ( result == 255 )
      {
        v28 = *(_DWORD *)(v5 + 268);
        *(_BYTE *)(v5 + 255) = 0;
        (*(void (__fastcall **)(int, int))(v5 + 264))(a3, v27);
        ++*(_DWORD *)(v5 + 296);
        v27 = 1;
        result = 0;
      }
      *(_DWORD *)(v5 + 256) = v27;
      *(_BYTE *)(v5 + result) = 38;
      *(_BYTE *)(v5 + 260) = 38;
      return result;
    case 0x2D:
      v29 = *(_DWORD *)(result + 256);
      v30 = "__vector(";
      for ( l = 32; ; l = *v30++ )
      {
        if ( v29 == 255 )
        {
          v33 = *(_DWORD *)(v5 + 268);
          *(_BYTE *)(v5 + 255) = 0;
          v34 = l;
          (*(void (__cdecl **)(int, signed int, int))(v5 + 264))(v5, 255, v33);
          ++*(_DWORD *)(v5 + 296);
          v29 = 1;
          v32 = 0;
          l = v34;
        }
        else
        {
          v32 = v29++;
        }
        *(_DWORD *)(v5 + 256) = v29;
        *(_BYTE *)(v5 + v32) = l;
        *(_BYTE *)(v5 + 260) = l;
        if ( "" == v30 )
          break;
      }
      v70 = *(_DWORD *)(v3 + 8);
      goto LABEL_97;
    case 0x19:
    case 0x1C:
      result = *(_DWORD *)(result + 256);
      v35 = "restrict";
      for ( m = 32; ; m = *v35++ )
      {
        if ( result == 255 )
        {
          v38 = *(_DWORD *)(v5 + 268);
          *(_BYTE *)(v5 + 255) = 0;
          v39 = m;
          (*(void (__cdecl **)(int, signed int, int))(v5 + 264))(v5, 255, v38);
          ++*(_DWORD *)(v5 + 296);
          result = 1;
          v37 = 0;
          m = v39;
        }
        else
        {
          v37 = result++;
        }
        *(_DWORD *)(v5 + 256) = result;
        *(_BYTE *)(v5 + v37) = m;
        *(_BYTE *)(v5 + 260) = m;
        if ( "" == v35 )
          break;
      }
      return result;
    case 0x1A:
    case 0x1D:
      result = *(_DWORD *)(result + 256);
      v40 = "volatile";
      for ( n = 32; ; n = *v40++ )
      {
        if ( result == 255 )
        {
          v43 = *(_DWORD *)(v5 + 268);
          *(_BYTE *)(v5 + 255) = 0;
          v44 = n;
          (*(void (__cdecl **)(int, signed int, int))(v5 + 264))(v5, 255, v43);
          ++*(_DWORD *)(v5 + 296);
          result = 1;
          v42 = 0;
          n = v44;
        }
        else
        {
          v42 = result++;
        }
        *(_DWORD *)(v5 + 256) = result;
        *(_BYTE *)(v5 + v42) = n;
        *(_BYTE *)(v5 + 260) = n;
        if ( "" == v40 )
          break;
      }
      return result;
    case 0x1B:
    case 0x1E:
      result = *(_DWORD *)(result + 256);
      v45 = "const";
      for ( ii = 32; ; ii = *v45++ )
      {
        if ( result == 255 )
        {
          v48 = *(_DWORD *)(v5 + 268);
          *(_BYTE *)(v5 + 255) = 0;
          v49 = ii;
          (*(void (__cdecl **)(_DWORD, _DWORD, int))(v5 + 264))(v5, 255, v48);
          ++*(_DWORD *)(v5 + 296);
          result = 1;
          v47 = 0;
          ii = v49;
        }
        else
        {
          v47 = result++;
        }
        *(_DWORD *)(v5 + 256) = result;
        *(_BYTE *)(v5 + v47) = ii;
        *(_BYTE *)(v5 + 260) = ii;
        if ( v45 == "" )
          break;
      }
      return result;
    case 0x24:
      result = *(_DWORD *)(result + 256);
LABEL_69:
      v50 = "&&";
      for ( jj = 38; ; jj = *v50 )
      {
        if ( result == 255 )
        {
          v53 = *(_DWORD *)(v5 + 268);
          *(_BYTE *)(v5 + 255) = 0;
          v54 = jj;
          (*(void (__cdecl **)(_DWORD, _DWORD, int))(v5 + 264))(v5, 255, v53);
          ++*(_DWORD *)(v5 + 296);
          result = 1;
          v52 = 0;
          jj = v54;
        }
        else
        {
          v52 = result++;
        }
        ++v50;
        *(_DWORD *)(v5 + 256) = result;
        *(_BYTE *)(v5 + v52) = jj;
        *(_BYTE *)(v5 + 260) = jj;
        if ( "" == v50 )
          break;
      }
      return result;
    case 0x4E:
      result = *(_DWORD *)(result + 256);
      v55 = "noexcept";
      for ( kk = 32; ; kk = *v55++ )
      {
        if ( result == 255 )
        {
          v58 = *(_DWORD *)(v5 + 268);
          *(_BYTE *)(v5 + 255) = 0;
          v59 = kk;
          (*(void (__cdecl **)(_DWORD, _DWORD, int))(v5 + 264))(v5, 255, v58);
          ++*(_DWORD *)(v5 + 296);
          result = 1;
          v57 = 0;
          kk = v59;
        }
        else
        {
          v57 = result++;
        }
        *(_DWORD *)(v5 + 256) = result;
        *(_BYTE *)(v5 + v57) = kk;
        *(_BYTE *)(v5 + 260) = kk;
        if ( "" == v55 )
          break;
      }
      goto LABEL_93;
    case 0x4F:
      result = *(_DWORD *)(result + 256);
      v60 = "throw";
      for ( ll = 32; ; ll = *v60++ )
      {
        if ( result == 255 )
        {
          v63 = *(_DWORD *)(v5 + 268);
          *(_BYTE *)(v5 + 255) = 0;
          v64 = ll;
          (*(void (__cdecl **)(_DWORD, _DWORD, int))(v5 + 264))(v5, 255, v63);
          ++*(_DWORD *)(v5 + 296);
          result = 1;
          v62 = 0;
          ll = v64;
        }
        else
        {
          v62 = result++;
        }
        *(_DWORD *)(v5 + 256) = result;
        *(_BYTE *)(v5 + v62) = ll;
        *(_BYTE *)(v5 + 260) = ll;
        if ( v60 == "" )
          break;
      }
LABEL_93:
      v70 = *(_DWORD *)(v3 + 12);
      if ( v70 )
      {
        v71 = result + 1;
        if ( result == 255 )
        {
          v72 = *(_DWORD *)(v5 + 268);
          *(_BYTE *)(v5 + 255) = 0;
          (*(void (__fastcall **)(int, int))(v5 + 264))(v70, v71);
          v70 = *(_DWORD *)(v3 + 12);
          v71 = 1;
          result = 0;
          ++*(_DWORD *)(v5 + 296);
        }
        *(_DWORD *)(v5 + 256) = v71;
        *(_BYTE *)(v5 + result) = 40;
        *(_BYTE *)(v5 + 260) = 40;
LABEL_97:
        sub_6F899DD0(v5, v4, v70);
        result = *(_DWORD *)(v5 + 256);
        v74 = result + 1;
        if ( result == 255 )
        {
          v75 = *(_DWORD *)(v5 + 268);
          *(_BYTE *)(v5 + 255) = 0;
          (*(void (__fastcall **)(int, int))(v5 + 264))(v73, v74);
          ++*(_DWORD *)(v5 + 296);
          v74 = 1;
          result = 0;
        }
        *(_DWORD *)(v5 + 256) = v74;
        *(_BYTE *)(v5 + result) = 41;
        *(_BYTE *)(v5 + 260) = 41;
      }
      break;
    case 0x4C:
      result = *(_DWORD *)(result + 256);
      v65 = "transaction_safe";
      for ( mm = 32; ; mm = *v65++ )
      {
        if ( result == 255 )
        {
          v68 = *(_DWORD *)(v5 + 268);
          *(_BYTE *)(v5 + 255) = 0;
          v69 = mm;
          (*(void (__cdecl **)(_DWORD, _DWORD, int))(v5 + 264))(v5, 255, v68);
          ++*(_DWORD *)(v5 + 296);
          result = 1;
          v67 = 0;
          mm = v69;
        }
        else
        {
          v67 = result++;
        }
        *(_DWORD *)(v5 + 256) = result;
        *(_BYTE *)(v5 + v67) = mm;
        *(_BYTE *)(v5 + 260) = mm;
        if ( "" == v65 )
          break;
      }
      break;
  }
  return result;
}
