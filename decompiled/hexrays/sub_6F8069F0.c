signed int __cdecl sub_6F8069F0(int a1, int a2, int *a3, int a4)
{
  int v4; // ebp@5
  signed int result; // eax@6
  int *v6; // esi@13
  int *v7; // ecx@23
  int v8; // eax@25
  int v9; // edx@25
  int v10; // ecx@25
  int v11; // edi@25
  int v12; // esi@26
  int v13; // ebp@26
  int v14; // ebx@27
  int v15; // eax@27
  int v16; // edi@31
  int v17; // edx@35
  int v18; // eax@35
  int v19; // ecx@35
  int v20; // edi@35
  int v21; // ebp@36
  int v22; // esi@36
  int v23; // eax@37
  int v24; // ebp@38
  unsigned int v25; // ebp@47
  int v26; // ecx@50
  int v27; // esi@51
  int v28; // ecx@75
  int v29; // edx@75
  int v30; // edx@96
  int v31; // ST14_4@101
  int v32; // ST18_4@101
  int v33; // edi@101
  int v34; // ST14_4@101
  int v35; // ST18_4@101
  int v36; // edi@101
  int v37; // [sp+10h] [bp-2Ch]@25
  int v38; // [sp+14h] [bp-28h]@31

  switch ( a2 )
  {
    case 30:
      if ( !a3 || !a1 )
        goto LABEL_104;
      if ( *a3 <= 0 )
        goto LABEL_98;
      v4 = *(_DWORD *)(a1 + 52);
      *(_DWORD *)(a1 + 52) = *a3;
      if ( v4 <= 0 )
      {
        sub_6F80D1F0(a1 + 174904, a1);
        result = 0;
      }
      else
      {
        sub_6F80D860(a1);
        result = 0;
      }
      return result;
    case 0:
      if ( !a3 && a4 || a3 && a4 != 20480 )
        goto LABEL_98;
      if ( !a1 )
        goto LABEL_104;
      if ( *(_DWORD *)(a1 + 51588) >= 0 )
        goto LABEL_98;
      v6 = (int *)&unk_6FB89580;
      if ( a3 != 0 )
        v6 = a3;
      sub_6F8332B0(a1 + 51552);
      result = sub_6F809240(a1 + 51552, (int)v6);
      if ( result >= 0 )
      {
        memcpy((void *)(a1 + 53168), v6, 0x5000u);
        result = 0;
      }
      return result;
    case 2:
      if ( !a3 && a4 || a3 && a4 != 392 )
        goto LABEL_98;
      if ( !a1 )
        goto LABEL_104;
      if ( *(_DWORD *)(a1 + 51588) >= 0 )
        goto LABEL_98;
      v7 = (int *)&unk_6FB88BC0;
      if ( a3 != 0 )
        v7 = a3;
      v37 = (int)v7;
      *(_DWORD *)(a1 + 73648) = *v7;
      *(_DWORD *)(a1 + 74036) = v7[97];
      v8 = a1;
      v9 = a1;
      qmemcpy(
        (void *)((a1 + 73652) & 0xFFFFFFFC),
        (char *)v7 - (a1 + 73648 - ((a1 + 73652) & 0xFFFFFFFC)),
        4 * ((a1 + 73648 - ((a1 + 73652) & 0xFFFFFFFC) + 392) >> 2));
      v10 = a1;
      v11 = 0;
      do
      {
        v11 += 2;
        v8 += 48;
        *(_DWORD *)(v8 + 752) = v9 + 2336;
        *(_DWORD *)(v8 + 73992) = v10 + 75576;
        *(_DWORD *)(v8 + 756) = v9 + 2464;
        *(_DWORD *)(v8 + 73996) = v10 + 75832;
        *(_DWORD *)(v8 + 760) = v9 + 2592;
        *(_DWORD *)(v8 + 74000) = v10 + 76088;
        *(_DWORD *)(v8 + 764) = v9 + 2720;
        *(_DWORD *)(v8 + 74004) = v10 + 76344;
        *(_DWORD *)(v8 + 768) = v9 + 2848;
        *(_DWORD *)(v8 + 74008) = v10 + 76600;
        *(_DWORD *)(v8 + 772) = v9 + 2976;
        *(_DWORD *)(v8 + 74012) = v10 + 76856;
        *(_DWORD *)(v8 + 776) = v9 + 3104;
        *(_DWORD *)(v8 + 74016) = v10 + 77112;
        *(_DWORD *)(v8 + 780) = v9 + 3232;
        *(_DWORD *)(v8 + 74020) = v10 + 77368;
        *(_DWORD *)(v8 + 784) = v9 + 3360;
        *(_DWORD *)(v8 + 74024) = v10 + 77624;
        *(_DWORD *)(v8 + 788) = v9 + 3488;
        *(_DWORD *)(v8 + 74028) = v10 + 77880;
        *(_DWORD *)(v8 + 792) = v9 + 3616;
        v12 = v9 + 3744;
        v9 += 1536;
        *(_DWORD *)(v8 + 74032) = v10 + 78136;
        v13 = v10 + 78392;
        v10 += 3072;
        *(_DWORD *)(v8 + 796) = v12;
        *(_DWORD *)(v8 + 74036) = v13;
      }
      while ( v11 != 64 );
      v14 = a1 + 173880;
      sub_6F808D20(a1 + 800, a1 + 74040, v37);
      *(_DWORD *)(v14 - 122392) = *(_DWORD *)(v37 + 256);
      *(_DWORD *)(v14 - 122388) = *(_DWORD *)(v37 + 260);
      *(_DWORD *)(v14 - 122384) = *(_DWORD *)(v37 + 264);
      *(_DWORD *)(v14 - 122380) = *(_DWORD *)(v37 + 268);
      *(_DWORD *)(v14 - 122376) = *(_DWORD *)(v37 + 272);
      *(_DWORD *)(v14 - 122372) = *(_DWORD *)(v37 + 276);
      *(_DWORD *)(v14 - 122368) = *(_DWORD *)(v37 + 280);
      *(_DWORD *)(v14 - 122364) = *(_DWORD *)(v37 + 284);
      *(_DWORD *)(v14 - 122360) = *(_DWORD *)(v37 + 288);
      *(_DWORD *)(v14 - 122356) = *(_DWORD *)(v37 + 292);
      *(_DWORD *)(v14 - 122352) = *(_DWORD *)(v37 + 296);
      *(_DWORD *)(v14 - 122348) = *(_DWORD *)(v37 + 300);
      v15 = *(_DWORD *)(a1 + 48);
      *(_DWORD *)(v14 - 122344) = *(_DWORD *)(v37 + 304);
      *(_DWORD *)(v14 - 122340) = *(_DWORD *)(v37 + 308);
      *(_DWORD *)(v14 - 122336) = *(_DWORD *)(v37 + 312);
      *(_DWORD *)(v14 - 122332) = *(_DWORD *)(v37 + 316);
      sub_6F808FD0((_QWORD *)(a1 + 173880), a1 + 800, v15);
      return 0;
    case 10:
      if ( !a3 || !a1 )
        goto LABEL_104;
      if ( a4 != 4 )
        goto LABEL_98;
      v16 = *(_DWORD *)(a1 + 51588);
      v38 = *a3;
      *(_BYTE *)(a1 + 51612) = *a3;
      if ( v16 >= 0 )
        goto LABEL_103;
      sub_6F8332B0(a1 + 51552);
      if ( sub_6F809240(a1 + 51552, (int)&unk_6FB89580) < 0 )
      {
        v16 = *(_DWORD *)(a1 + 51588);
LABEL_103:
        v38 = 0;
      }
      else
      {
        memcpy((void *)(a1 + 53168), &unk_6FB89580, 0x5000u);
        v16 = *(_DWORD *)(a1 + 51588);
      }
      if ( v16 >= 0 )
      {
        v38 = 0;
      }
      else
      {
        v17 = a1;
        *(_DWORD *)(a1 + 73648) = 13107420;
        *(_DWORD *)(a1 + 74036) = &unk_6FB89280;
        v18 = a1;
        qmemcpy(
          (void *)((a1 + 73652) & 0xFFFFFFFC),
          (char *)&dword_6FB890C0 - (a1 + 73648 - ((a1 + 73652) & 0xFFFFFFFC)),
          4 * ((a1 + 73648 - ((a1 + 73652) & 0xFFFFFFFC) + 392) >> 2));
        v19 = a1;
        v20 = 0;
        do
        {
          v20 += 2;
          v18 += 48;
          *(_DWORD *)(v18 + 752) = v19 + 2336;
          *(_DWORD *)(v18 + 73992) = v17 + 75576;
          *(_DWORD *)(v18 + 756) = v19 + 2464;
          *(_DWORD *)(v18 + 73996) = v17 + 75832;
          *(_DWORD *)(v18 + 760) = v19 + 2592;
          *(_DWORD *)(v18 + 74000) = v17 + 76088;
          *(_DWORD *)(v18 + 764) = v19 + 2720;
          *(_DWORD *)(v18 + 74004) = v17 + 76344;
          *(_DWORD *)(v18 + 768) = v19 + 2848;
          *(_DWORD *)(v18 + 74008) = v17 + 76600;
          *(_DWORD *)(v18 + 772) = v19 + 2976;
          *(_DWORD *)(v18 + 74012) = v17 + 76856;
          *(_DWORD *)(v18 + 776) = v19 + 3104;
          *(_DWORD *)(v18 + 74016) = v17 + 77112;
          *(_DWORD *)(v18 + 780) = v19 + 3232;
          *(_DWORD *)(v18 + 74020) = v17 + 77368;
          *(_DWORD *)(v18 + 784) = v19 + 3360;
          *(_DWORD *)(v18 + 74024) = v17 + 77624;
          *(_DWORD *)(v18 + 788) = v19 + 3488;
          *(_DWORD *)(v18 + 74028) = v17 + 77880;
          *(_DWORD *)(v18 + 792) = v19 + 3616;
          v21 = v19 + 3744;
          v19 += 1536;
          *(_DWORD *)(v18 + 74032) = v17 + 78136;
          v22 = v17 + 78392;
          v17 += 3072;
          *(_DWORD *)(v18 + 796) = v21;
          *(_DWORD *)(v18 + 74036) = v22;
        }
        while ( v20 != 64 );
        sub_6F808D20(a1 + 800, a1 + 74040, (int)&dword_6FB890C0);
        *(_DWORD *)(a1 + 51488) = 336861470;
        *(_DWORD *)(a1 + 51492) = 235802383;
        *(_DWORD *)(a1 + 51496) = 202116365;
        *(_DWORD *)(a1 + 51500) = 168430347;
        *(_DWORD *)(a1 + 51504) = 134744329;
        *(_DWORD *)(a1 + 51508) = 117901063;
        *(_DWORD *)(a1 + 51512) = 101058054;
        *(_DWORD *)(a1 + 51516) = 84215045;
        *(_DWORD *)(a1 + 51520) = 67372036;
        *(_DWORD *)(a1 + 51524) = 50529027;
        *(_DWORD *)(a1 + 51528) = 33686018;
        *(_DWORD *)(a1 + 51532) = 33686018;
        v23 = *(_DWORD *)(a1 + 48);
        *(_DWORD *)(a1 + 51536) = 0;
        *(_DWORD *)(a1 + 51540) = 0;
        *(_DWORD *)(a1 + 51544) = 0;
        *(_DWORD *)(a1 + 51548) = 0;
        sub_6F808FD0((_QWORD *)(a1 + 173880), a1 + 800, v23);
      }
      v24 = 0;
      if ( !*(_DWORD *)(a1 + 48)
        && *(_DWORD *)(a1 + 12) >= *(_DWORD *)(a1 + 4)
        && *(_DWORD *)(a1 + 16) >= *(_DWORD *)(a1 + 8)
        && *(_DWORD *)(a1 + 228) < 0x1000u )
      {
        v24 = v38;
      }
      result = 0;
      *a3 = v24;
      break;
    case 4:
      if ( !a3 || !a1 )
        goto LABEL_104;
      if ( a4 != 4 )
        goto LABEL_98;
      v25 = 1;
      if ( *a3 )
        v25 = *a3;
      if ( *(_DWORD *)(a1 + 51588) == -3 )
      {
        v31 = *(_DWORD *)(a1 + 60);
        v32 = sub_6F8095C0(v25 - 1);
        v33 = sub_6F8095C0(v25 - 1);
        v34 = v31 - (v32 + (sub_6F8095C0(v25 - 1) > 31 ? 31 - v33 : 0));
        v35 = sub_6F8095C0(v25 - 1);
        v36 = sub_6F8095C0(v25 - 1);
        v26 = *(_DWORD *)(a1 + 60)
            - (v35 + (sub_6F8095C0(v25 - 1) > 31 ? 31 - v36 : 0) > *(_DWORD *)(a1 + 60) ? v34 : 0);
        *(_DWORD *)(a1 + 60) = v26;
      }
      else
      {
        v26 = *(_DWORD *)(a1 + 60);
      }
      result = 0;
      v27 = v25 + (v25 > 1 << v26 ? (1 << v26) - v25 : 0);
      *(_DWORD *)(a1 + 51592) = v27;
      *a3 = v27;
      break;
    case 12:
      if ( !a3 || !a1 )
        goto LABEL_104;
      if ( a4 != 4 )
        goto LABEL_98;
      *a3 = 2;
      result = 0;
      break;
    case 14:
      if ( !a3 || !a1 )
        goto LABEL_104;
      if ( a4 != 4 || (unsigned int)*a3 > 2 )
        goto LABEL_98;
      *(_DWORD *)(a1 + 51608) = *a3;
      result = 0;
      break;
    case 16:
      if ( !a3 || !a1 )
        goto LABEL_104;
      if ( a4 != 4 )
        goto LABEL_98;
      result = 0;
      *a3 = *(_DWORD *)(a1 + 51608);
      break;
    case 18:
      if ( !a3 || !a1 )
        goto LABEL_104;
      if ( a4 != 4 || (unsigned int)*a3 >= *(_DWORD *)(a1 + 51592) )
        goto LABEL_98;
      result = 0;
      *(_DWORD *)(a1 + 51596) = (~*a3 >> 31) & *a3;
      break;
    case 20:
      if ( !a3 || !a1 )
        goto LABEL_104;
      if ( a4 != 4 || *(_DWORD *)(a1 + 52) <= 0 )
        goto LABEL_98;
      v28 = *a3 & 1;
      v29 = *a3 & 2;
      *(_BYTE *)(a1 + 174994) = *a3 & 4;
      *(_BYTE *)(a1 + 174992) = v28;
      *(_BYTE *)(a1 + 174993) = v29;
      result = 0;
      break;
    case 22:
      if ( !a3 || !a1 )
        goto LABEL_104;
      if ( a4 != 4 || *(_DWORD *)(a1 + 52) <= 0 )
        goto LABEL_98;
      *(_DWORD *)(a1 + 174952) = *a3;
      sub_6F80D860(a1);
      result = 0;
      *a3 = *(_DWORD *)(a1 + 174952);
      break;
    case 24:
      if ( !a3 || !a1 )
        goto LABEL_104;
      if ( *(_DWORD *)(a1 + 52) <= 0 || *(_DWORD *)(a1 + 780) >= 0 && *(_DWORD *)(a1 + 175112) != 1 || a4 != 4 )
        goto LABEL_98;
      result = sub_6F810490(a1, a3);
      break;
    case 26:
      if ( !a1 )
        goto LABEL_104;
      if ( *(_DWORD *)(a1 + 52) <= 0 || *(_DWORD *)(a1 + 780) >= 0 && *(_DWORD *)(a1 + 175112) != 2 )
        goto LABEL_98;
      result = sub_6F8109A0(a1, (int)a3, a4);
      break;
    case 28:
      if ( a3 && a1 )
      {
        if ( *(_DWORD *)(a1 + 52) > 0 || (v30 = *a3, (unsigned int)*a3 > 0x3F) )
        {
LABEL_98:
          result = -10;
        }
        else
        {
          *(_DWORD *)(a1 + 56) = v30;
          *(_BYTE *)(a1 + 795) = v30;
          result = 0;
          *(_BYTE *)(a1 + 794) = 1;
        }
      }
      else
      {
LABEL_104:
        result = -1;
      }
      break;
    default:
      return -23;
  }
  return result;
}
