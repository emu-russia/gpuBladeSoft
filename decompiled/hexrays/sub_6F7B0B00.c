void __cdecl sub_6F7B0B00(int a1)
{
  __int16 v1; // ax@1
  int v2; // eax@5
  int v3; // edx@5

  v1 = *(_WORD *)(a1 + 218);
  *(_DWORD *)(a1 + 256) = 0;
  if ( *(_WORD *)(a1 + 216) == v1 )
  {
    *(_DWORD *)(a1 + 592) = sub_6F7A9D30;
    *(_DWORD *)(a1 + 596) = sub_6F7A9D40;
    *(_DWORD *)(a1 + 600) = sub_6F7A9D60;
    *(_DWORD *)(a1 + 604) = sub_6F7A9D80;
  }
  else
  {
    *(_DWORD *)(a1 + 592) = sub_6F7AFD00;
    *(_DWORD *)(a1 + 596) = sub_6F7AB280;
    *(_DWORD *)(a1 + 600) = sub_6F7AFBC0;
    *(_DWORD *)(a1 + 604) = sub_6F7AFC60;
  }
  sub_6F7AA020(a1);
  switch ( (unsigned __int8)*(_DWORD *)(a1 + 312) )
  {
    case 2u:
      *(_DWORD *)(a1 + 568) = sub_6F7AE370;
      break;
    case 6u:
      *(_DWORD *)(a1 + 568) = sub_6F7AE3B0;
      break;
    case 7u:
      *(_DWORD *)(a1 + 568) = sub_6F7AE420;
      break;
    case 0u:
      *(_DWORD *)(a1 + 568) = sub_6F7AE2B0;
      break;
    case 1u:
      *(_DWORD *)(a1 + 568) = sub_6F7AE270;
      break;
    case 3u:
      *(_DWORD *)(a1 + 568) = sub_6F7AE2F0;
      break;
    case 4u:
      *(_DWORD *)(a1 + 568) = sub_6F7AE330;
      break;
    case 5u:
      *(_DWORD *)(a1 + 568) = sub_6F7A9E20;
      break;
    default:
      break;
  }
  v2 = *(_DWORD *)(a1 + 360);
  v3 = *(_DWORD *)(a1 + 364);
  JUMPOUT(loc_6F7B0BAF);
}
