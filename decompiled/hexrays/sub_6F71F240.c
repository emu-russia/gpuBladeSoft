void __usercall sub_6F71F240(unsigned int a1@<eax>)
{
  unsigned int v1; // ebx@1
  int v2; // ecx@15
  unsigned int v3; // eax@15
  int v4; // ST08_4@18
  int v5; // ecx@19
  int v6; // esi@19
  int v7; // edx@19
  int v8; // ebx@20
  int v9; // eax@27
  int v10; // [sp+14h] [bp-18h]@5
  unsigned int v11; // [sp+18h] [bp-14h]@4
  unsigned int v12; // [sp+1Ch] [bp-10h]@4

  v1 = a1;
  while ( 2 )
  {
    nullsub_10();
    if ( dword_6FD400E8 && !dword_6FD400D0 )
    {
      v11 = 5;
      v12 = v1;
      sub_6F681470((int)&v11);
    }
    v10 = 5;
    v11 = v1;
    if ( dword_6FBB5098 )
    {
      sub_6F88DA60(dword_6FD400E4, (char *)&v10, 4u);
      sub_6F88DA60(dword_6FD400E4, (char *)&v11, 4u);
    }
    v10 = 5;
    v11 = v1;
    if ( dword_6FD400DC )
    {
      sub_6F88DA60(dword_6FD400D8, (char *)&v10, 4u);
      sub_6F88DA60(dword_6FD400D8, (char *)&v11, 4u);
    }
    dword_6FD40160[v1 >> 24] = v1;
    switch ( v1 >> 24 )
    {
      case 0u:
        dword_6FBB97A0 = 1024;
        *(_DWORD *)&word_6FBB979C = 343941120;
        sub_6F75A6D0(dword_6FD40978);
        byte_6FD40960 = 0;
        dword_6FD40968 = 1;
        dword_6FD40964 = 0;
        dword_6FD40120 = 0;
        dword_6FD40124 = 0;
        dword_6FD40128 = 0;
        dword_6FD4012C = 0;
        dword_6FD40130 = 0;
        dword_6FD40134 = 0;
        dword_6FD40138 = 0;
        dword_6FD4013C = 0;
        sub_6F71F120();
        nullsub_10();
        break;
      case 1u:
        byte_6FBB979F &= 0xF7u;
        dword_6FD40968 = 1;
        dword_6FD40964 = 0;
        byte_6FD40960 = 0;
        dword_6FD40120 = 0;
        dword_6FD40124 = 0;
        dword_6FD40128 = 0;
        dword_6FD4012C = 0;
        dword_6FD40130 = 0;
        dword_6FD40134 = 0;
        dword_6FD40138 = 0;
        dword_6FD4013C = 0;
        nullsub_10();
        break;
      case 2u:
        byte_6FBB979F &= 0xFEu;
        nullsub_10();
        break;
      case 3u:
        unk_6FBB979E = unk_6FBB979E & 0x7F | ((_BYTE)v1 << 7);
        nullsub_10();
        break;
      case 4u:
        v2 = 32 * (v1 & 3);
        v3 = (v2 | byte_6FBB979F & 0x9F) & 0xFFFFFFFD | 2;
        if ( ((((unsigned __int8)v2 | byte_6FBB979F & 0x9F) & 0x60) - 32) & 0xC0 )
          v3 = (v2 | byte_6FBB979F & 0x9F) & 0xFFFFFFFD;
        byte_6FBB979F = v3;
        if ( !byte_70041E00 )
        {
          if ( sub_6F9624B0((int)&byte_70041E00) )
          {
            sub_6F695280(dword_70041DA0, "DISABLED");
            sub_6F695280(&unk_70041DB8, "01");
            sub_6F695280(&unk_70041DD0, "CPUtoGPU");
            sub_6F695280(&unk_70041DE8, "GPUtoCPU");
            sub_6F962670((int)&byte_70041E00);
            sub_6F6813F0((int)sub_6F723EF0);
          }
        }
        v4 = dword_70041DA0[6 * (((unsigned __int8)byte_6FBB979F >> 5) & 3)];
        nullsub_10();
        break;
      case 5u:
        v5 = dword_6FBBDB70;
        v6 = dword_6FBBDB74;
        v7 = (signed __int16)(v1 & dword_6FD40988);
        dword_6FBBDB70 = (signed __int16)(v1 & dword_6FD40988);
        if ( dword_6FD40990 == 2 )
          v8 = (v1 >> 10) & (unsigned __int16)dword_6FD40984;
        else
          v8 = (v1 >> 12) & (unsigned __int16)dword_6FD40984;
        dword_6FBBDB74 = v8;
        if ( v5 != v7 || v6 != v8 )
          dword_70041D80 ^= 1u;
        nullsub_10();
        break;
      case 6u:
        dword_6FBBDB80 = v1 & 0xFFF;
        dword_6FBBDB84 = (v1 >> 12) & 0xFFF;
        nullsub_10();
        break;
      case 7u:
        dword_6FBBDB88 = v1 & 0x3FF;
        dword_6FBBDB8C = (v1 >> 10) & 0x3FF;
        nullsub_10();
        break;
      case 8u:
        *(_DWORD *)&word_6FBB979C = (v1 << 10) & 0x10000 | ((v1 << 17) & 0x7E0000 | *(_DWORD *)&word_6FBB979C & 0xFFC0FFFF) & 0xFFBEBFFF | ((_WORD)v1 << 7) & 0x4000;
        v9 = dword_6FB4EBE0[((unsigned __int16)word_6FBB979C >> 16) | (*(_DWORD *)&word_6FBB979C >> 16) & 6];
        dword_6FBBDB7C = dword_6FB4EBB8[(*(_DWORD *)&word_6FBB979C >> 19) & 3];
        dword_6FBBDB78 = v9;
        nullsub_10();
        sub_6F71F240(dword_6FBBDB80 | (dword_6FBBDB84 << 12) | 0x6000000);
        v1 = dword_6FBBDB88 | (dword_6FBBDB8C << 10) | 0x7000000;
        continue;
      case 0x10u:
        switch ( (unsigned __int8)v1 )
        {
          case 7u:
            dword_6FBB97A0 = dword_6FD40990;
            nullsub_10();
            break;
          case 5u:
            dword_6FBB97A0 = dword_6FD408F4 & 0x3FFFFF;
            nullsub_10();
            break;
          case 4u:
            dword_6FBB97A0 = dword_6FD408F0 & 0xFFFFF;
            nullsub_10();
            break;
          case 3u:
            dword_6FBB97A0 = dword_6FD408EC & 0xFFFFF;
            nullsub_10();
            break;
          case 2u:
            dword_6FBB97A0 = dword_6FD408E8 & 0xFFFFF;
            nullsub_10();
            break;
          default:
            nullsub_10();
            break;
        }
        break;
      default:
        nullsub_10();
        break;
    }
    break;
  }
}
