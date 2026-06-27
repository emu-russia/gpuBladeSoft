int __cdecl sub_6F811AA0(int a1)
{
  int result; // eax@1

  result = 0;
  *(_DWORD *)(a1 + 51784) = 0;
  *(_DWORD *)(a1 + 52548) = 0;
  memset((void *)((a1 + 51788) & 0xFFFFFFFC), 0, 4 * ((a1 + 51784 - ((a1 + 51788) & 0xFFFFFFFC) + 768) >> 2));
  *(_DWORD *)(a1 + 52552) = 0;
  *(_DWORD *)(a1 + 52932) = 0;
  memset((void *)((a1 + 52556) & 0xFFFFFFFC), 0, 4 * ((a1 + 52552 - ((a1 + 52556) & 0xFFFFFFFC) + 384) >> 2));
  *(_DWORD *)(a1 + 52936) = 0;
  *(_DWORD *)(a1 + 53124) = 0;
  memset((void *)((a1 + 52940) & 0xFFFFFFFC), 0, 4 * ((a1 + 52936 - ((a1 + 52940) & 0xFFFFFFFC) + 192) >> 2));
  *(_DWORD *)(a1 + 53128) = 0;
  *(_DWORD *)(a1 + 53160) = 0;
  memset((void *)((a1 + 53132) & 0xFFFFFFFC), 0, 4 * ((a1 + 53128 - ((a1 + 53132) & 0xFFFFFFFC) + 36) >> 2));
  return result;
}
