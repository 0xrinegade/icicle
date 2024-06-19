"use strict";(self.webpackChunkdocusaurus=self.webpackChunkdocusaurus||[]).push([[899],{5680:(e,r,t)=>{t.d(r,{xA:()=>p,yg:()=>m});var a=t(6540);function o(e,r,t){return r in e?Object.defineProperty(e,r,{value:t,enumerable:!0,configurable:!0,writable:!0}):e[r]=t,e}function n(e,r){var t=Object.keys(e);if(Object.getOwnPropertySymbols){var a=Object.getOwnPropertySymbols(e);r&&(a=a.filter((function(r){return Object.getOwnPropertyDescriptor(e,r).enumerable}))),t.push.apply(t,a)}return t}function i(e){for(var r=1;r<arguments.length;r++){var t=null!=arguments[r]?arguments[r]:{};r%2?n(Object(t),!0).forEach((function(r){o(e,r,t[r])})):Object.getOwnPropertyDescriptors?Object.defineProperties(e,Object.getOwnPropertyDescriptors(t)):n(Object(t)).forEach((function(r){Object.defineProperty(e,r,Object.getOwnPropertyDescriptor(t,r))}))}return e}function c(e,r){if(null==e)return{};var t,a,o=function(e,r){if(null==e)return{};var t,a,o={},n=Object.keys(e);for(a=0;a<n.length;a++)t=n[a],r.indexOf(t)>=0||(o[t]=e[t]);return o}(e,r);if(Object.getOwnPropertySymbols){var n=Object.getOwnPropertySymbols(e);for(a=0;a<n.length;a++)t=n[a],r.indexOf(t)>=0||Object.prototype.propertyIsEnumerable.call(e,t)&&(o[t]=e[t])}return o}var l=a.createContext({}),s=function(e){var r=a.useContext(l),t=r;return e&&(t="function"==typeof e?e(r):i(i({},r),e)),t},p=function(e){var r=s(e.components);return a.createElement(l.Provider,{value:r},e.children)},u="mdxType",g={inlineCode:"code",wrapper:function(e){var r=e.children;return a.createElement(a.Fragment,{},r)}},d=a.forwardRef((function(e,r){var t=e.components,o=e.mdxType,n=e.originalType,l=e.parentName,p=c(e,["components","mdxType","originalType","parentName"]),u=s(t),d=o,m=u["".concat(l,".").concat(d)]||u[d]||g[d]||n;return t?a.createElement(m,i(i({ref:r},p),{},{components:t})):a.createElement(m,i({ref:r},p))}));function m(e,r){var t=arguments,o=r&&r.mdxType;if("string"==typeof e||o){var n=t.length,i=new Array(n);i[0]=d;var c={};for(var l in r)hasOwnProperty.call(r,l)&&(c[l]=r[l]);c.originalType=e,c[u]="string"==typeof e?e:o,i[1]=c;for(var s=2;s<n;s++)i[s]=t[s];return a.createElement.apply(null,i)}return a.createElement.apply(null,t)}d.displayName="MDXCreateElement"},6740:(e,r,t)=>{t.r(r),t.d(r,{assets:()=>l,contentTitle:()=>i,default:()=>g,frontMatter:()=>n,metadata:()=>c,toc:()=>s});var a=t(8168),o=(t(6540),t(5680));t(1873);const n={slug:"/",displayed_sidebar:"GettingStartedSidebar",title:""},i="Welcome to Ingonyama's Developer Documentation",c={unversionedId:"introduction",id:"introduction",title:"",description:"Ingonyama is a next-generation semiconductor company, focusing on Zero-Knowledge Proof hardware acceleration. We build accelerators for advanced cryptography, unlocking real-time applications. Our focus is on democratizing access to compute intensive cryptography and making it accessible for developers to build on top of.",source:"@site/docs/introduction.md",sourceDirName:".",slug:"/",permalink:"/",editUrl:"https://github.com/ingonyama-zk/icicle/tree/main/docs/introduction.md",tags:[],version:"current",lastUpdatedBy:"HadarIngonyama",lastUpdatedAt:1718786304,formattedLastUpdatedAt:"6/19/2024",frontMatter:{slug:"/",displayed_sidebar:"GettingStartedSidebar",title:""},sidebar:"GettingStartedSidebar",next:{title:"What is ICICLE?",permalink:"/icicle/overview"}},l={},s=[{value:"Our current take on hardware acceleration",id:"our-current-take-on-hardware-acceleration",level:2},{value:"ICICLE",id:"icicle",level:2},{value:"Get in Touch",id:"get-in-touch",level:2}],p={toc:s},u="wrapper";function g(e){let{components:r,...t}=e;return(0,o.yg)(u,(0,a.A)({},p,t,{components:r,mdxType:"MDXLayout"}),(0,o.yg)("h1",{id:"welcome-to-ingonyamas-developer-documentation"},"Welcome to Ingonyama's Developer Documentation"),(0,o.yg)("p",null,"Ingonyama is a next-generation semiconductor company, focusing on Zero-Knowledge Proof hardware acceleration. We build accelerators for advanced cryptography, unlocking real-time applications. Our focus is on democratizing access to compute intensive cryptography and making it accessible for developers to build on top of."),(0,o.yg)("p",null,"Currently our flagship products are:"),(0,o.yg)("ul",null,(0,o.yg)("li",{parentName:"ul"},(0,o.yg)("strong",{parentName:"li"},"ICICLE"),":\n",(0,o.yg)("a",{parentName:"li",href:"https://github.com/ingonyama-zk/icicle"},"ICICLE")," is a fully featured GPU accelerated cryptography library for building ZK provers. ICICLE allows you to accelerate your existing ZK protocols in a matter of hours or implement your protocol from scratch on GPU.")),(0,o.yg)("hr",null),(0,o.yg)("h2",{id:"our-current-take-on-hardware-acceleration"},"Our current take on hardware acceleration"),(0,o.yg)("p",null,"We believe GPUs are as important for ZK as for AI."),(0,o.yg)("ul",null,(0,o.yg)("li",{parentName:"ul"},"GPUs are a perfect match for ZK compute - around 97% of ZK protocol runtime is parallel by nature."),(0,o.yg)("li",{parentName:"ul"},"GPUs are simple for developers to use and scale compared to other hardware platforms."),(0,o.yg)("li",{parentName:"ul"},"GPUs are extremely competitive in terms of power / performance and price (3x cheaper compared to FPGAs)."),(0,o.yg)("li",{parentName:"ul"},"GPUs are popular and readily available.")),(0,o.yg)("p",null,"For a more in-depth understanding on this topic we suggest you read ",(0,o.yg)("a",{parentName:"p",href:"https://www.ingonyama.com/blog/revisiting-paradigm-hardware-acceleration-for-zero-knowledge-proofs"},"our article on the subject"),"."),(0,o.yg)("p",null,"Despite our current focus on GPUs we are still hard at work developing a ZPU (ZK Processing Unit), with the goal of offering a programmable hardware platform for ZK. To read more about ZPUs we suggest you read this ",(0,o.yg)("a",{parentName:"p",href:"https://medium.com/@ingonyama/zpu-the-zero-knowledge-processing-unit-f886a48e00e0"},"article"),"."),(0,o.yg)("h2",{id:"icicle"},"ICICLE"),(0,o.yg)("p",null,(0,o.yg)("a",{parentName:"p",href:"https://github.com/ingonyama-zk/icicle"},"ICICLE")," is a cryptography library for ZK using GPUs.\nICICLE implements blazing fast cryptographic primitives such as EC operations, MSM, NTT, Poseidon hash and more on GPU."),(0,o.yg)("p",null,"ICICLE is designed to be easy to use, developers don't have to touch a single line of CUDA code. Our Rust and Golang bindings allow your team to transition from CPU to GPU with minimal changes."),(0,o.yg)("p",null,"Learn more about ICICLE and GPUs ",(0,o.yg)("a",{parentName:"p",href:"/icicle/overview"},"here"),"."),(0,o.yg)("h2",{id:"get-in-touch"},"Get in Touch"),(0,o.yg)("p",null,"If you have any questions, ideas, or are thinking of building something in this space, join the discussion on ",(0,o.yg)("a",{parentName:"p",href:"https://discord.gg/6vYrE7waPj"},"Discord"),". You can explore our code on ",(0,o.yg)("a",{parentName:"p",href:"https://github.com/ingonyama-zk"},"github")," or read some of ",(0,o.yg)("a",{parentName:"p",href:"https://github.com/ingonyama-zk/papers"},"our research papers"),"."),(0,o.yg)("p",null,"Follow us on ",(0,o.yg)("a",{parentName:"p",href:"https://x.com/Ingo_zk"},"Twitter")," and ",(0,o.yg)("a",{parentName:"p",href:"https://www.youtube.com/@ingo_ZK"},"YouTube")," and sign up for our ",(0,o.yg)("a",{parentName:"p",href:"https://wkf.ms/3LKCbdj"},"mailing list")," to get our latest announcements."))}g.isMDXComponent=!0},1873:(e,r,t)=>{t(6540)}}]);